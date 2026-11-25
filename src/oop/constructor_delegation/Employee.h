#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee {
private:
  std::string emp_name;
  int emp_age;
  double emp_salary;

public:
  Employee();               // default constructor
  Employee(std::string nm); // name constructor
  Employee(std::string nm, int age,
           double salary); // all parameters constructor
  ~Employee();             // Destructor
};
#endif