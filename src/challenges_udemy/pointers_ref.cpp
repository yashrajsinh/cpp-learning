#include <iostream>

int *apply_all(const int *const arr_one, int size_one, const int *const arr_two,
               int size_two);

void print_array(const int *const ptr_array, int size);

int main() {
  int first_array[]{1, 2, 3, 4, 5};
  int first_array_size = sizeof(first_array) / sizeof(first_array[0]);

  int second_array[]{10, 20, 30};
  int second_array_size = sizeof(second_array) / sizeof(second_array[0]);

  int *ptr_array =
      apply_all(first_array, first_array_size, second_array, second_array_size);

  print_array(ptr_array, first_array_size * second_array_size);

  delete[] ptr_array;
  ptr_array = nullptr;
}

int *apply_all(const int *const arr_one, int size_one, const int *const arr_two,
               int size_two) {

  int array_size = size_one * size_two;
  int *value_array = new int[array_size];

  size_t array_index{0};

  for (size_t i{0}; i < size_two; ++i) {
    for (size_t j{0}; j < size_one; ++j) {

      value_array[array_index] = arr_one[j] * arr_two[i];
      ++array_index;
    }
  }

  return value_array;
}

// Prints array using a pointer to const integers
void print_array(const int *const ptr_array, int size) {

  std::cout << "[";

  for (size_t i{0}; i < size; ++i) {
    std::cout << ptr_array[i];

    if (i < size - 1) {
      std::cout << ", ";
    }
  }

  std::cout << "]\n";
}
