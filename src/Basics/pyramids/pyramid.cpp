#include <iostream>
#include <string>
using namespace std;

int main() {}

/*
*****************
1
12
123
1234
12345
******************
 Solution
******************
for (size_t i{1}; i <= 5; ++i) {
    for (size_t j{1}; j <= i; ++j) {
      cout << j;
    }
    cout << "\n";
  }
 */

/*
*****************
12345
2345
345
45
5
*****************
 for (size_t i{1}; i <= 5; ++i) {
    for (size_t j{i}; j <= 5; ++j) {
      cout << i;
    }
    cout << "\n";
  }
*/

/*
*****************
  A
 BBB
CCCCC
DDDDDDD
*****************
int height{4};
 std::string elements{"ABCD"};

 for (int i{0}; i < height; ++i) {

   // Print leading spaces
   for (int j{0}; j < height - 1 - i; ++j) {
     std::cout << " ";
   }

   // Print stars
   for (int k{0}; k < 2 * i + 1; ++k) {
     std::cout << elements[i];
   }

   std::cout << "\n";
 }
 */