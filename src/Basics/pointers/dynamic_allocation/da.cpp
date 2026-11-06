#include <iostream>
#include <vector>

void SwapInts(int &a, int &b) {
  int temp{0};
  temp = b;
  b = a;
  a = temp;
}

std::vector<int> SortVec(std::vector<int> vec) {
  for (int i{0}; i < vec.size(); ++i) {
    for (int j{0}; j < vec.size() - i - 1; ++j) {
      if (vec[j] > vec[j + 1]) {
        SwapInts(vec[j], vec[j + 1]);
      }
    }
  }
  for (auto a : vec) {
    std::cout << a << "\n";
  }
  return vec;
}

int main() {
  int x{21}, y{36};
  // std::cout << " X " << x << " Y " << y << "\n";
  SwapInts(x, y);
  // std::cout << " X " << x << " Y " << y << "\n";
  std::vector<int> vec{11, 4, 3, 10};
  SortVec(vec);
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

/*
************************************************************
 4. Dynamic Array Input
- Ask the user how many numbers they want to store.
- Dynamically allocate an integer array using new[].
- Take input for every element.
- Display all elements.
- Release the array using delete[].
************************************************************
Solution :
************************************************************
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
  delete[] ptr_array;
*/

/*
************************************************************
 5. Array Statistics
 Using a dynamically allocated array:
- Find the largest number.
- Find the smallest number.
- Calculate the sum.
- Calculate the average.
************************************************************
Solution :
************************************************************


int *input_array(int size); // func to create an array with pointer and return
void print_array(const int *arr, int size);
void find_min_and_max(int *arr, int size);
void find_sum(int *arr, int size);
void reversed_array(int *arr, int size);


int *input_array(int size) {
  int *arr = new int[size];
  for (size_t i{0}; i < size; ++i) {
    std::cout << "Enter value #" << i << " : ";
    std::cin >> *(arr + i);
  }
  return arr; // return memory address
}

void print_array(const int *arr, int size) {
  for (size_t i{0}; i < size; ++i) {
    std::cout << *(arr + i) << "\n";
  }
}

void find_min_and_max(int *arr, int size) {
  int min = *(arr + 0);
  int max = *(arr + 0);
  for (size_t i{1}; i < size; ++i) {
    if (*(arr + i) > max) {
      max = *(arr + i);
    }
    if (*(arr + i) < min) {
      min = *(arr + i);
    }
  }
  std::cout << "Min : " << min << "\n" << "Max : " << max << "\n";
}

void find_sum(int *arr, int size) {
  int sum{0};
  for (size_t i{0}; i < size; ++i) {
    sum += *(arr + i);
  }
  std::cout << "Sum is : " << sum << "\n";
}

void reversed_array(int *arr, int size) {
  int temp{0};
  int reverse_index = size - 1;
  for (size_t i{0}; i < size / 2; ++i) {
    temp = *(arr + reverse_index);
    *(arr + reverse_index) = *(arr + i);
    *(arr + i) = temp;
    --reverse_index;
  }
  std::cout << "Reversed array\n";
  print_array(arr, size);
}

*/

/*
************************************************************
 6. Write a program that:
- Declares an integer pointer initialized to nullptr.
- Checks whether it is null.
- Dynamically allocates an integer.
- Assigns a value.
- Prints the value.
- Deletes the allocated memory.
- Sets the pointer back to nullptr.
- Checks whether it is null again.
************************************************************
Solution :
************************************************************
bool check_null_pointer(int *ptr);
int main() {
  int *ptr = nullptr;
  std::cout << check_null_pointer(ptr);
  ptr = new int(5);
  std::cout << "\nInitialzing array of 5 with values\n";
  for (size_t i{0}; i < 5; ++i) {
    *(ptr + i) = (i + 1 * 20);
  }
  std::cout << check_null_pointer(ptr);
  std::cout << "\nPrinting array...\n[";
  for (size_t i{0}; i < 5; ++i) {
    std::cout << *(ptr + i) << ", ";
  }
  std::cout << "]\n";
  delete ptr;
  ptr = nullptr;
  std::cout << check_null_pointer(ptr) << "\n";
}
bool check_null_pointer(int *ptr) { return (ptr == nullptr); }

*/