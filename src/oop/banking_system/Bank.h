#ifndef __BANK_H__
#define __BANK_H__
#include <string>
class Bank {
private:
  /* data */
  std::string account_holder_name;
  double balance;

public:
  Bank(std::string nm, double bal);
  void deposite(double amount);
  void withdraw(double amount);
  void display_balance();
};
#endif