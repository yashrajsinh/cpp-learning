#include <iostream>
int main() {
  int size{0};
  std::cout << "Enter array size between 5 and 8 -> ";
  std::cin >> size;
  int *ptr_array = new int[size];
  for (int i = 0; i < size; ++i) {
    std::cout << "Enter #" << i << " Value -> ";
    std::cin >> *(ptr_array + i);
  }
  for (size_t i{0}; i < size; ++i) {
    std::cout << *(ptr_array + i) << "\n";
  }
}

/*
 ************************************
  1. Dynamic Integer
  - Declare a pointer to an integer
  - Dynamically allocate memory for one integer using new.
  - Initialize it to 50.
  - Print its value and address.
  - Change its value to 100 using the pointer.
  - Release the memory using delete.
   ************************************
    Solution :
   ************************************
     int *ptr_int = new int(50);
  std::cout << ptr_int << "\n" << *ptr_int << "\n";
  *ptr_int = 100;
  std::cout << *ptr_int << "\n";
  delete ptr_int;
  std::cout << *ptr_int << "\n" << ptr_int << "\n";
  */

/*
************************************
 2. Dynamic Calculator
 - Dynmially allocate two ints and ask user to enter 2 numbers
 - use pointer to calculate additoanl, subs, multi and division
 - print result and don't forget to release allocaitons.
************************************
Solution :
************************************
  int *ptr_val_one = new int();
  int *ptr_val_two = new int();

  std::cout << "Enter two numbers followed by a space -> ";

  if (!(std::cin >> *ptr_val_one >> *ptr_val_two)) {
    std::cout << "Invlaid values....\n";
  } else {
    std::cout << "You entered " << *ptr_val_one << " " << *ptr_val_two
              << "\nAddition - " << (*ptr_val_one + *ptr_val_two)
              << "\nSubtraction - " << (*ptr_val_one - *ptr_val_two)
              << "\nMultiplication - " << (*ptr_val_one * *ptr_val_two)
              << std::endl;
  }
  delete ptr_val_one;
  delete ptr_val_two;

  std::cout << ptr_val_one; // Garbage Val : xb7f9310aa020
 */

/*
 ************************************
   3. Pointer Modification
Requirements:
- Dynamically allocate an integer in main().
- Pass its pointer to the function.
- Modify the value inside the function.
- Print the updated value in main().
- Release the memory.
************************************
Solution :
************************************
void updateValue(int *ptr); // function prototype

  int *p = new int(75);
  std::cout << p << " *p " << *p << std::endl; // 0xb588793e9020 *p 75
  updateValue(p);
  std::cout << p << " *p " << *p << std::endl; // 0xb588793e9020 *p 69
  delete p;
  std::cout << p << " *p " << *p << std::endl; // 0xb588793e9020 *p 1485280233

void updateValue(int *ptr) {
  std::cout << "Updated to 69\n";
  *ptr = 69;
}

*/