#include "Account.h"
#include <iostream>
void print_line() {
  std::cout << "\n---------------------------------------\n";
}
int main() {
  print_line();
  std::cout << "Outside block\n";
  {
    Account alex("Alex Perry", "Chequing", 23, 13000.0);

    Account user(alex);

    user.make_withdraw(2000); // that's allowed wont change orignal obj
    print_line();
    alex.display_user();
    print_line();
    user.display_user();
  }
  std::cout << "\nEnd of main block.\n";
  print_line();
  return 0;
}
