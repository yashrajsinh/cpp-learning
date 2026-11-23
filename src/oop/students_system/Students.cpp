#include "Students.h"
#include <iostream>

Students ::Students(std::string name, int age) {
  student_name = name;
  student_age = age;
}

void Students::display_details() {
  std::cout << "Hi, " << student_name << "\nyour age is : " << student_age
            << "\n";
}