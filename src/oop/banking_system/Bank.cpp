#include "Bank.h"
#include <iostream>

Bank ::Bank(std::string nm, double bal) {
  account_holder_name = nm;
  balance = bal;
}

void Bank::deposite(double amount) {
  if (amount >= 1 && amount <= 4000) {
    balance += amount;
  }
}

void Bank::withdraw(double amount) {
  if (balance - amount >= 1) {
    balance -= amount;
  }
}

void Bank::display_balance() {
  std::cout << "Hi your current balance is : " << balance << "\n";
}