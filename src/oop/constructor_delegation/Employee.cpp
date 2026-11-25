#include "Employee.h"
#include <iostream>

Employee::Employee() : Employee("Unknown", 0, 0) {
  std::cout << "\nDefault called.";
} // Default

Employee::Employee(std::string nm) : Employee(nm, 0, 0.0) {
  std::cout << "\nWith name called.";
} // with name

Employee::Employee(std::string nm, int age, double salary)
    : emp_name(nm), emp_age(age), emp_salary(salary) {
  std::cout << "\nThree parameter called.";
} // with all 3 params

Employee::~Employee() {
  std::cout << "\nDestructor called for " << emp_name;
} // Destructor