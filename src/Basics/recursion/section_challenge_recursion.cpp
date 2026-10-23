#include <iostream>
#include <vector>

void display_options();
void print_vector(const std::vector<int> &values, size_t index = 0);
void add_value(std::vector<int> &values, size_t target_size);
double find_smallest(const std::vector<int> &values, size_t index = 0);
double find_largest(const std::vector<int> &values, size_t index = 0);

int main() {
  std::vector<int> values{1, 2, 3, 5, 6};
  int input{0};

  while (true) {
    display_options();
    std::cin >> input;

    if (input == 0) {
      std::cout << "Exiting...\n";
      break;
    } else if (input == 1) {
      std::cout << "Vector elements: ";
      print_vector(values);
      std::cout << '\n';
    } else if (input == 2) {
      size_t target_size{};
      std::cout << "Enter target vector size: ";
      std::cin >> target_size;

      if (target_size > values.size()) {
        add_value(values, target_size);
      } else {
        std::cout << "Target size must exceed current size.\n";
      }
    } else if (input == 3) {
      int smallest = find_smallest(values);
      std::cout << "Smallest element is : " << smallest << "\n";
    } else if (input == 4) {
      int largest = find_largest(values);
      std::cout << "Largest element is : " << largest << "\n";
    }
  }
  return 0;
}

void display_options() {
  std::cout << "**********************************"
            << "\n1 - Print numbers"
            << "\n2 - Add numbers"
            << "\n3 - Find the smallest number"
            << "\n4 - Find the largest number"
            << "\n0 - Quit\n"
            << "**********************************"
            << "\nEnter your choice -> ";
}

void print_vector(const std::vector<int> &values, size_t index) {
  if (index >= values.size())
    return;

  std::cout << values[index] << " ";
  print_vector(values, index + 1);
}

void add_value(std::vector<int> &values, size_t target_size) {
  if (values.size() >= target_size)
    return;

  int input{};
  std::cout << "Enter a value to add -> ";
  std::cin >> input;

  values.push_back(input);
  add_value(values, target_size);
}

double find_smallest(const std::vector<int> &values, size_t index) {
  // base condition
  if (index == values.size() - 1)
    return values[index];
  int smallest = find_smallest(values, index + 1);
  return values[index] < smallest ? values[index] : smallest;
}

double find_largest(const std::vector<int> &values, size_t index) {
  // base condition
  if (index == values.size() - 1)
    return values[index];
  int largest = find_largest(values, index + 1);
  return values[index] > largest ? values[index] : largest;
}
