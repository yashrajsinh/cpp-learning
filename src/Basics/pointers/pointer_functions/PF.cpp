#include <iostream>
#include <string>
int *create_array(size_t size) {
  int *array = new int[size];
  for (size_t i{0}; i < size; ++i) {
    *(array + i) = 2;
  }
  return array;
}
void display_array(const int *arr, size_t size) {
  for (size_t i{0}; i < size; ++i) {
    std::cout << *(arr + i) << "\n";
  }
}

std::string reverse_string(const std::string &str) {
  std::string reversed;
  // Write your code below this line

  // Write your code abocve this line
  return reversed;
}

int main() {
  size_t size{};
  std::string s = {"Ga Sung Li!"};
  std::cout << s;
}

/*
void multiply_with_pointer(int *ptr, int multiplier) { (*ptr) *= multiplier; }

  int a{10}, b{3};
  std::cout << "\na : " << a << "\nb : " << b << "\n";
  multiply_with_pointer(&a, b);
  std::cout << "\na : " << a << "\nb : " << b << "\n";
*/