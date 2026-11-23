#ifndef __STUDENTS_H__
#define __STUDENTS_H__
#include <string>
class Students {
private:
  std::string student_name;
  int student_age;

public:
  Students(std::string name, int age);
  void display_details();
};
#endif