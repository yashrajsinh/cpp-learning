/*
 a simple OOP explanation programs
*/
#include <iostream>
#include <string>

/*
*************************************
1. Student management
Requirements:
- Create a Student class.
- Attributes: name, age, rollNumber.
- Method: displayDetails().
- Create two student objects with different values.
O/P their details
*************************************
Solution:
*************************************

*/
class Student {
private:
  std::string name;
  int age;
  int roll_number;

public:
  void set_age(int age) {
    if (age < 0 || age > 18) {
      std::cout << "Invalid age" << age << "\n";
    } else {
      this->age = age;
    }
  }

  void set_name(std::string name) {
    if (!name.empty()) {
      this->name = name;
    } else {
      std::cout << "Invalid name" << name << "\n";
    }
  }

  void set_roll_number(int roll_no) {
    if (roll_no < 0 || roll_no > 25) {
      std::cout << "Invalid Roll No" << roll_no << "\n";
    } else {
      this->roll_number = roll_no;
    }
  }

  std::string get_name() { return this->name; }
  int get_age() { return this->age; }
  int get_roll_number() { return this->roll_number; }

  void display_student_info(Student s) {
    std::cout << "\n______________________________________________________"
              << "\nStudent's roll is : " << s.get_roll_number()
              << "\nStudent's name is : " << s.get_name()
              << "\nStudent's age is : " << s.get_age()
              << "\n______________________________________________________";
  }
};

int main() {
  // std::cout << "Wsup bud!?\n"
  Student frank;

  frank.set_age(18);
  frank.set_name("Jaden Smith");
  frank.set_roll_number(15);
  frank.display_student_info(frank);

  return 0;
}
