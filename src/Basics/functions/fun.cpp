#include <iostream>
#include <vector>
bool is_even(int number); // prototype of func
double find_maximum(double first_value, double second_value);
double sum_of_vector(std::vector<double> values);

int main() {

  double input_first{0}, input_second{0};
  std::cout << "Enter two numbers followed by a space : ";

  // if valid value
  if ((std::cin >> input_first >> input_second)) {
    std::cout << find_maximum(input_first, input_second) << " is bigger \n";
  } else {
    std::cout << "Invalid Number entered!\n";
  }

  std::vector<double> numbers{1, 2, 3, 4, 5, 6};
  if (numbers.size() >= 1) {
    std::cout << "Sum of vector is : " << sum_of_vector(numbers) << "\n";
  }
}
// Func definition
bool is_even(int number) { return (number % 2 == 0); }

double find_maximum(double first_value, double second_value) {
  return first_value > second_value ? first_value : second_value;
}

double sum_of_vector(std::vector<double> &values) {
  double sum{0};
  for (double element : values) {
    sum += element;
  }
  return sum;
}