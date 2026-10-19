#include <iostream>
#include <string>
int main() {}

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

/*
   **************************************
    6. Check if string is palindrom
    Input : Madam O/P: Yes It's
   **************************************
    Solution: Time: O(n), Space: O(1)
   **************************************
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
   */

/*
**************************************
 7. Count Words in a String
 Given: "ChatGPT sucks ass"
 o/p : 3
**************************************
   Solution : Time O(n) , Space O(1)
**************************************
std::string input;
int count{0};
std::cout << "Enter a sentence I'll count words : ";
getline(std::cin, input);
for (int i{0}; input.c_str()[i] != '\0'; ++i) {
 if (input[i] != ' ' && (i == 0 || input[i - 1] == ' ')) {
   ++count;
 }
}
std::cout << count << " words ";
*/

/*
**************************************
8. Given a string,
ask the user for a character
and count how many times that
character appears.
Given: "Chat GPT Sucks " Character: 'C' o/P:1
**************************************
Solution: Time : O(n), Space : O(1)
**************************************
std::string input;
char occurance_character;
int count{0};

std::cout << "Enter a sentence : ";
getline(std::cin, input);

std::cout << "Enter a char : ";
std::cin >> occurance_character;

for (int i{0}; input.c_str()[i] != '\0'; ++i) {
  if (input[i] == occurance_character) {
    ++count;
  }
}
std::cout << "Occurance : " << count << "\n";
*/
/*
    Cipher program to encypt and decrepy
    msg
  ******************************************
    Solution : Time O(1) because only 52 elements, Space O(1)
  ******************************************
   std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  std::string key{"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};

  std::string input_value;
  std::cout << "Write something and I'll encrypt and decrypt: ";
  getline(std::cin, input_value);

  std::string encrypted_msg{};
  std::string decrypted_msg{};

  // Encryption
  for (size_t i{0}; input_value.c_str()[i] != '\0'; ++i) {
    bool found{false};

    for (size_t j{0}; alphabet.c_str()[j] != '\0'; ++j) {
      if (input_value[i] == alphabet[j]) {
        encrypted_msg += key[j];
        found = true;
        break;
      }
    }
    if (!found) {
      encrypted_msg += input_value[i];
    }
  }

  std::cout << "Encrypting...\n";
  std::cout << "Encrypted message: " << encrypted_msg << "\n";

  // Decryption
  for (size_t i{0}; encrypted_msg.c_str()[i] != '\0'; ++i) {
    bool found{false};

    for (size_t j{0}; key.c_str()[j] != '\0'; ++j) {
      if (encrypted_msg[i] == key[j]) {
        decrypted_msg += alphabet[j];
        found = true;
        break;
      }
    }
    if (!found) {
      decrypted_msg += encrypted_msg[i];
    }
  }

  std::cout << "Decrypting...\n";
  std::cout << "Decrypted message: " << decrypted_msg << "\n";

  */