#include <iostream>

int main() {
  int score{100};
  int *score_ptr{&score};
}

// int numbers[] = {10, 20, 30, 40, 50};
//  swapValues(&x, &y);
// std::cout << findLargest(&x, &y) << "\n";
// doubleValue(&x);
// std::cout << sum_array(numbers, 5);

/*
*********************************
 SIMPLE POINTER
*********************************
 int value{10};
  std::cout << value << "\n"; // prints value 10
  int *p = &value;
  *p = 25;

  std::cout << p << "\n";  // Memory address of value 25
  std::cout << &p << "\n"; // Memoery address of P
  std::cout << *p << "\n"; // Value of *p which is 25
*/

/*
*********************************
1. Swap two values using pointers
swapValues(int *a,int *b)
*********************************
Solution : Time : O(1) , Space: O(1)
*********************************
void swapValues(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

/*
*********************************
2. Find the larger value using pointers
findLargest(int *a, int *b);
*********************************
Solution : Time : O(1) , Space: O(1)
*********************************
int findLargest(int *a, int *b) { return (*a > *b) ? *a : *b; }
*/

/*
*********************************
3. Write void doubleValue(int* p) so that calling it doubles the original
integer.
*********************************
Solution: Time, Space : O(1)
*********************************
void doubleValue(int *p) { std::cout << (*p * 2) << "\n"; }
*/

/*
*********************************
4. Traverse an array using pointer
Given an Int array, use a pointer to visit each element and calculate the sum,
avoid using arr[i] in the loop, practice using arthmecti instead
*********************************
Solution: Time:O(n)  Space:O(1)
int sum_array(int *arr, size_t size);
*********************************
int sum_array(int *arr, size_t size) {
  int sum{0};
  for (size_t i{0}; i < size; ++i) {
    sum += *(arr + i);
  }
  return (sum > INT_MIN) ? sum : 0;
}
*/

/*
******************************************************************
5. Understand nullptr
write a program that checks whether pointer is nullptr
before derefrecncing it. explain why derefrecncing a null pointer in unsafe.
******************************************************************
Solution: Time O(1) Space: O(1)
- A null pointer doesn't point to a valid object, so dereferencing
it causes undefined behavior.
- A non-null pointer isn't automatically safe. It could still point to invalid
memory, an object that no longer exists, or an address that isn't properly
aligned.
******************************************************************
 int *ptrX = &x;
  int *ptrY = &y;
  ptrX = nullptr;
  if (ptrX != nullptr && ptrY) {
    std::cout << *ptrX << "\n" << *ptrY;
  }
*/

/*
Bonus — references
Before OOP, make sure you can explain the difference between these two function
signatures: void change(int* p); void change(int& value);

1. (int* p)
- int* p means a pointer to an integer, not a reference to a pointer.
- You typically pass an address, like change(&x).
- Inside the function, *p = 20; changes the original integer's value.

2. (int& value);
- int& value means a reference to the original integer.
- You call it with change(x), not change(&x).
- Assigning value = 20; changes the original integer's value.

*/
