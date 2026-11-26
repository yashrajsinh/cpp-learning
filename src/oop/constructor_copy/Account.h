#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
class Account {
private:
  std::string user_name;
  std::string user_account_type;
  int user_age;
  double user_current_balance;

public:
  Account(std::string nm, std::string acc_type, int ag,
          double bal);                         // param constructor
  ~Account();                                  // Destructor
  Account(const Account &user);                // Copy constructor
  void display_user();                         // display user func
  bool make_withdraw(double amount);           // make deposite func
  double get_current_balance();                // show user's current balance
  void show_copy_details(const Account &user); // show copy user details
};
#endif