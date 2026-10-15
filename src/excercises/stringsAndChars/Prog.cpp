#include <iostream>
#include <string>
int main() {
  /*
   **************************************
    6. Check if string is palindrom
    Input : Madam O/P: Yes It's
   **************************************
   */
  std::string input;
  int size{0};
  bool isPalindrome{false};
  std::cout << "Enter a string,and I'll check if it's Palindrome : ";
  getline(std::cin, input);
  if (!input.empty()) {
    for (int i{0}; input.c_str()[i] != '\0'; ++i) {
      ++size;
    }
  }
  for (int i{0}; i < size / 2; ++i) {
    char temp = input[--size];
    if (input[i] == temp) {
      isPalindrome = true;
    } else {
      isPalindrome = false;
      break;
    }
  }
  (isPalindrome) ? std::cout << "Yes, it's\n" : std::cout << "No, it's not\n";
}
/*
**************************************
  1. Read a charchater input from a user and figure what it type of char
it is.
**************************************
  Solution : Time O(1) , Space O(1)
**************************************
char input;
std::string output{"You entered"};
std::cout << "Please enter a character: ";
std::cin >> input;

switch (input) {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
std::cout << "You entered a lowercase vowel: " << input << '\n';
break;

default:
if (input >= 'a' && input <= 'z') {
std::cout << "You entered another lowercase letter: " << input << '\n';
} else if (input >= '0' && input <= '9') {
std::cout << "You entered a digit: " << input << '\n';
} else {
std::cout << "You entered another character: " << input << '\n';
}
break;
}

*/

/*
 **************************************
   2. You are given this string:
   std::string word{"programming"};
   count char in string
 **************************************
   Solution : Time: O(n), Space: O(1)
 **************************************
  std::string name{"Gross "};
 int count{0};

 for (int i{0}; name.c_str()[i] != '\0'; ++i) {
   ++count;
 }

 std::cout << count << std::endl;
 */

/*
**************************************
       3. Print Each Character
       Given str: HELLO
       print H \n E \n
    **************************************
       Solution: Time : O(n), Space: O(1)
    **************************************
    std::string name{"Chat GPT Sucks Claude AI is better"};
 for (int i{0}; name.c_str()[i] != '\0'; ++i) {
   if (name.c_str()[i] != ' ') {
     std::cout << name[i] << "\n";
   }
 }
 */

/*
**************************************
  4. Count Vowels in a String
  Given: programming
  O/P: Vowels : 3
**************************************
  Solution: Time O(n), Space O(1)
**************************************
std::string name;
std::cout << "Enter your name : ";
getline(std::cin, name);
int count{0};
for (int i{0}; name.c_str()[i] != '\0'; ++i) {
  if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' ||
      name[i] == 'u') {
    ++count;
  }
}
std::cout << count << " Vowels Found\n";
*/

/*
**************************************
   5. Reverse string
   Input: Hello O/P: olleh
**************************************
   Solution: Time O(n), Space O(1)
**************************************
std::string input;
 int size{0};
 std::cout << "Enter a string,and I'll reverse it : ";
 getline(std::cin, input);
 if (!input.empty()) {
   for (int i{0}; input.c_str()[i] != '\0'; ++i) {
     ++size;
   }
   // std::cout << size;
   for (int i{0}; i < size / 2; ++i) {
     char temp = input[i];
     input[i] = input[--size];
     input[size] = temp;
   }
   std::cout << input << "\n";
 }
*/