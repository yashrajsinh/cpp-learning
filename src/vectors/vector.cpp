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
 Solution :
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
  ******************************
  */
  vector<int> numbers{10,20,30,40,50};

  /*
  ******************************
  3.Remove the Last Elements
    Start with: [10, 20, 30, 40, 50]
    Call pop_back() twice.
    Expected: [10, 20, 30]
  ******************************
 Solution :
  numbers.pop_back();
  numbers.pop_back();


  /*
  ******************************
    4. Find the sum 
    [5, 10, 15, 20, 25]
    Output: 75
    This is intentionally easy — focus on using .size() correctly.
  ******************************  
  Solution :
  int sum{0};
  for(int i=0;i<numbers.size();i++){
    sum += numbers[i];
  }
  cout << "Sum is\t" << sum << endl;
  */

  


}

