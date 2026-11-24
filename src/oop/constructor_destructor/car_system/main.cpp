#include "Car.h"
#include <iostream>
int main() {
  std::cout << "Before Scope.";
  {
    std::cout << "\nInside Scope.";
    Car bmw;
    Car audi;
  }
  std::cout << "\nOutside scope.";
  return 0;
}