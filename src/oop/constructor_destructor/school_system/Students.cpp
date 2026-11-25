#include "Students.h"
#include <iostream>
// Default one
Students::Students() : student_name{"Unknown"}, student_age{0} {
  std::cout << "\nDefault called";
}
// Parameter
Students::Students(std::string nm, int ag) : student_name{nm}, student_age{ag} {
  std::cout << "\nParameter once called.";
}

// Destructor
Students::~Students() { std::cout << "\nDestroyed by C++"; }

// Display info
void Students::displayDetails() {
  std::cout << "\nHi name is : " << student_name
            << "\nAge is : " << student_age;
}