#include "Bank.h"
#include <iostream>
void display_options();
void print_line() {
  std::cout << "\n-------------------------------------------------\n";
}
int main() {
  Bank jason("Jason", 1000);
  int choice{-1};
  while (true) {
    display_options();
    std::cin >> choice;
    if (choice == 0) {
      std::cout << "Closing...\n";
      break;
    } else if (choice == 1) {
      jason.display_balance();
      print_line();
    } else if (choice == 2) {
      double withdraw_amount{0};
      std::cout << "Enter amount to withdraw : $";
      std::cin >> withdraw_amount;
      if (withdraw_amount > 0) {
        jason.withdraw(withdraw_amount);
        jason.display_balance();
      } else {
        std::cout << "\nInvalid amount try again";
      }
      print_line();
    } else if (choice == 3) {
      double deposite_amount{0};
      std::cout << "Enter amount to depostie : $";
      std::cin >> deposite_amount;
      if (deposite_amount > 0) {
        jason.deposite(deposite_amount);
        jason.display_balance();
      } else {
        std::cout << "\nInvalid amount try again";
      }
      print_line();
    }
  }

  return 0;
}
void display_options() {
  std::cout << "\n-------------------------------------------------"
            << "\nPlease chose one of the options or 0 to exit"
            << "\n1.Show account balance\n2.Make a withdraw \n3.Make a deposite"
            << "\n-------------------------------------------------"
            << "\nEnter your choice : ";
}