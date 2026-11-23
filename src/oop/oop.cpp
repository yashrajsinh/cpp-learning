/*
 a simple OOP explanation programs
*/
#include <iostream>
#include <string>

int main() {
  // std::cout << "Wsup bud!?\n"

  return 0;
}

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
              main(){
               Student frank;

  frank.set_age(18);
  frank.set_name("Jaden Smith");
  frank.set_roll_number(15);
  frank.display_student_info(frank);
              }
};
*/

/*
*************************************
 2.Rectangle Calculator
   Requirements:
- Create a Rectangle class.
- Attributes: length, width.
- Methods: calculateArea() and calculatePerimeter().
*************************************
Solution:
*************************************
class Rectangle {
private:
  double lenght;
  double width;

public:
  double get_lenght() { return this->lenght; }
  double get_widht() { return this->width; }
  void set_length(double length) { this->lenght = length; }
  void set_width(double width) { this->width = width; }
  double calculate_area(double lenght, double width) {
    return (lenght * width);
  }

  double calculate_perimeter(double lenght, double width) {
    return 2 * (lenght + width);
  }
};

main(){
  Rectangle r;
  r.set_length(8);
  r.set_width(4);

  std::cout << "Rectangle Permiter : "
            << r.calculate_perimeter(r.get_lenght(), r.get_widht());

  std::cout << "\nRectangle Area : "
            << r.calculate_area(r.get_lenght(), r.get_widht()) << std::endl;
}
*/

/*
*************************************
 3. Bank Account
Requirements:
- Create a BankAccount class.
- Attributes: accountHolder, balance.
- Methods: deposit(), withdraw(), displayBalance().
- Prevent withdrawals greater than the available balance.
*************************************
Solution:
*************************************
class Bank {
private:
  std::string account_holder_name;
  double balance;

public:
  Bank(std::string account_holder_name, double balance)
      : account_holder_name(account_holder_name), balance(balance) {}
  void deposite(double amount) {
    if (amount >= 1) {
      this->balance += amount;
      std::cout << "Deposite in : $" << amount;
      show_balance();
    } else {
      std::cout << "\nInvalid deposite amount " << amount;
    }
  }

  void withdraw(double amount) {
    if (balance - amount >= 0) {
      this->balance -= amount;
      std::cout << "\n0";
    } else {
      std::cout << "\n-1";
    }
  }

  void show_balance() {
    std::cout << "\nHi " << get_name() << "!\nYour current balance is : $"
              << get_balance() << "\n";
  }

  double get_balance() { return this->balance; }
  std::string get_name() { return this->account_holder_name; }
};
main(){
  Bank jeff("Jeffery Epstine", 800000);
  jeff.show_balance();
  jeff.deposite(5000);
  jeff.show_balance();

}
*/