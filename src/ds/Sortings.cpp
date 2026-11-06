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
  return vec;
}

void printVector(const std::vector<int> &vec) {

  for (auto a : vec) {
    std::cout << a << ", ";
  }
  std::cout << "\n";
}

int main() {
  std::vector<int> vec{11, 4, 3, 190};
  std::cout << "Vector before sorting : ";
  printVector(vec);
  std::cout << "Vector after sorting : ";
  vec = SortVec(vec);
  printVector(vec);
}

/*
********************************
Bubble sort
********************************

********************************

*/