#include <iostream>

int isAdult(int age);    // Prototype with out ref
void birthday(int &age); // prototype with ref
int main() {
  int age{45};
  // std::cout << isAdult(age);
  std::cout << age;
  birthday(age);
  std::cout << age;
  return 0;
}

int isAdult(int age) { return age > 18; }
void birthday(int &age) {
  std::cout << "\nYou were " << age++ << "\nHappy Birthday now you're " << age
            << " You old piece of work\nHehe, you though I was gonna say "
               "somethign else!!\n";
}