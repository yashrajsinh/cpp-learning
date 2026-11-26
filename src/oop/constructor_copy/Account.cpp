#include "Account.h"
#include <iostream>
// calling param constructor
Account::Account(std::string nm, std::string acc_type, int ag, double bal)
    : user_name{nm}, user_account_type{acc_type}, user_age{ag},
      user_current_balance{bal} {
  std::cout << "Param constuctor called for : " << user_name;
}

// Destructor
Account::~Account() { std::cout << "\nDestructor called for : " << user_name; }

// Copy constructor
Account::Account(const Account &user)
    : user_name{user.user_name}, user_account_type{user.user_account_type},
      user_age{user.user_age}, user_current_balance{user.user_current_balance} {
  // cant change values here since &user is a cosnt var user.user_name{"James"}
  // not allowed
  std::cout << "\nCopy constructor called for : " << user_name;
}
// Display user info
void Account::display_user() {
  std::cout << "\nAccount holder's name : " << user_name
            << "\nAccount type : " << user_account_type
            << "\nAccount holder's age : " << user_age
            << "\nCurrent Balance : " << user_current_balance;
}
// Make a deposite func
bool Account::make_withdraw(double amount) {
  if (user_current_balance - amount >= 1) {
    user_current_balance -= amount;
    return true;
  }
  return false;
}
// show copy user details
void Account::show_copy_details(const Account &user) {
  std::cout << "\nAccount holder's name : " << user.user_name
            << "\nAccount type : " << user.user_account_type
            << "\nAccount holder's age : " << user.user_age
            << "\nCurrent Balance : " << user.user_current_balance;
}
// Show current balance
double Account::get_current_balance() { return user_current_balance; }