#include<iostream>
#include<vector>

using namespace std;

int main(){
  /*
  ****************************
    1. Create and Print
    Vector: [10, 20, 30, 40, 50]
  ***************************
  Solution :
  ******************************
   
  for(int i=0;i<numbers.size();i++){
    cout << numbers[i] << endl;
  
    }
     
  */

  
  /*
    ******************************
         2. Add Elements Dynamically 
         Add these using push_back():
        10 20 30 40 50
        Then print the vector.
  ******************************
    Solution:
  ******************************
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
  
  */
 

  /*
  ******************************
  3.Remove the Last Elements
    Start with: [10, 20, 30, 40, 50]
    Call pop_back() twice.
    Expected: [10, 20, 30]
 ******************************
    Solution:
 ******************************
  numbers.pop_back();
  numbers.pop_back();
  /*


  ******************************
    4. Find the sum 
    [5, 10, 15, 20, 25]
    Output: 75
    This is intentionally easy — focus on using .size() correctly.
 ******************************
    Solution:
 ******************************
  int sum{0};
  for(int i=0;i<numbers.size();i++){
    sum += numbers[i];
  }
  cout << "Sum is\t" << sum << endl;
  */

    /*
  ******************************
    5. Find the Largest
    [12, 45, 7, 89, 23]
    Output: 89

  
   
  ******************************
  Solution:   time = O(n) ,  space = O(1)
  ******************************
    int largest_number{numbers[0]}; // we are using first index incase values are negative (<0)
    for (int i{1};i<numbers.size();i++){
    if(numbers[i]>largest_number){
      largest_number = numbers[i];
    }
  }
  cout << " Largest Number is " << largest_number << endl;
  */

  /*
   ******************************
    6. Read Numbers Until the User Stops Ask the user for numbers and keep adding them with push_back().
      For example:
      Enter number: 10
      Enter number: 20
      Enter number: 30
      Enter number: -1
      Store:
      [10, 20, 30]
    Don't put -1 into the vector.
   ******************************
    Solution:  Time O(n) , Space O(n) (because user input could affect spacing)
   ******************************
  vector<int>user_input{};
  int input_value{0};

  while(true)
  {
    cout << "Input Integer values or press -1 to exit\t";
    cin >> input_value;
    if(input_value==-1){
      cout << "Existing..." << endl;
      break;
    }
    else{
      user_input.push_back(input_value);
    }
  }

  for(int i{0};i<user_input.size();i++){
    cout << user_input[i] << endl;
  }
  
  */
  
/*
   ******************************
    7. Separate Even and Odd Numbers
      Given: [1, 2, 3, 4, 5, 6, 7, 8]
      Create two vectors: Even: [even numbers] Odd: [Odd numbers]
      using push_back();
  ******************************
    Solution: Time: O(n) Space : O(n)
  ******************************
  
    vector<int>even_input{};
    vector<int>odd_input{};


    for(int i{0};i<numbers.size();i++){

      if(numbers[i] % 2 == 0){
        even_input.push_back(numbers[i]);
      }
      else{
        odd_input.push_back(numbers[i]);
      }
    }
    
    cout << "Even Inputs" << endl;
    for(int i{0};i<even_input.size();i++){
        cout << even_input[i] << endl;
    }

    cout << "Odd Inputs" << endl;
     for(int i{0};i<odd_input.size();i++){
        cout << odd_input[i] << endl;
    }
*/

/*
   ******************************
    8.Reverse a Vector
    Input: [1, 2, 3, 4, 5]
    Output: [5, 4, 3, 2, 1]
    Try it without reverse().   
   ******************************
   Solution: Time: O(n) Space : O(1)
  ******************************
    vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8};
    int temp{0};
    int last_index = (numbers.size()-1);
    
    for(int i{0};i< (numbers.size() /2);i++){
      temp = numbers[last_index];
      numbers[last_index] = numbers[i];
      numbers[i] = temp;
      last_index--;
    }

    for(int i{0};i<numbers.size();i++){
      cout << numbers[i] << endl;
    }
    
   */

   /*
    ******************************
    9. Find the Second Largest
    Given a vector of integers: [10, 45, 23, 89, 67]
    Output: 67
    ******************************
    Solution: Time : O(n) Space : O(1)
    ******************************
     vector<int> numbers {10, 45, 23, 89, 67};
    int first_largest_number = numbers[0]; 
    int second_largest_number{0}; 
 
    if (second_largest > first_largest) {
        int temp = first_largest;
        first_largest = second_largest;
        second_largest = temp;
    }

    for (int i{2}; i < numbers.size(); i++) {

        if (numbers[i] > first_largest) {
            second_largest = first_largest;
            first_largest = numbers[i];
        }
        else if (numbers[i] > second_largest) {
            second_largest = numbers[i];
        }
    }

    cout << second_largest << endl;
    /*
    ******************************
      10. Build a Vector Without Knowing Its Size
      Ask the user how many numbers they want to enter:
      How many numbers? ->
      Enter Number n: ->
      Print
    ****************************** 
      Solution: Time: O(n) Space: O(n)
    ******************************
    vector<int> user_inputs{};
    int input_rage{0};
    cout << "How many values would you like enter ->\t";
    cin >> input_rage;
    for(int i{0};i<input_rage;i++){
      int temp{0};
      cout << "\nEnter #" << i+1 << " Value ->\t";
      cin >> temp;
      user_inputs.push_back(temp);
    }

    for(int i{0};i<user_inputs.size();i++){
        cout << user_inputs[i] << "\n" ;
    }
    */
 //----WRITE YOUR CODE BELOW THIS LINE----

}

