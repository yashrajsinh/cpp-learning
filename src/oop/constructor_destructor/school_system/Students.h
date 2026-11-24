#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
class Students {
private:
  std::string student_name;
  int student_age;

public:
  Students();                       // Default constructor
  Students(std::string nm, int ag); // Parameter constructor
  ~Students();                      // Destructor
  void displayDetails();            // method to display data
};

#endif