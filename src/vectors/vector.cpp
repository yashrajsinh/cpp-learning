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
  vector<int> numbers{10,20,30,40,50};

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

    time = O(n)
    space = O(1)
  ******************************
  Solution:
  ******************************
    int largest_number{numbers[0]};
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
    Solution:
   ******************************
  */
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
  

}

