#include<iostream>
#include<vector>
using namespace std; 

int main(){

   /*
      *************************************
       7. Search 
       Given: vector<int> vec{4, 8, 2, 9, 1, 6};
       Ask the user for a number.
       Print : Found at index X or Not found try again 
    *************************************
     Solution:   Time: Space:
    *************************************
   */
   

}

  /*
     *************************************
      1. Grade calculator 
      Input a score from 0–100. 
      90 - 100 -> A
      80 - 89  -> B
      70 - 79  -> C
      60 - 69  -> D
      <60      -> F
      *************************************
      Solution: Time: O(1), Space: O(1)
      *************************************
    int score{0};

    cout << "Enter you score -> ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid input\n";
    }
    else if (score >= 90) {
        cout << "Grade: A\n";
    }
    else if (score >= 80) {
        cout << "Grade: B\n";
    }
    else if (score >= 70) {
        cout << "Grade: C\n";
    }
    else if (score >= 60) {
        cout << "Grade: D\n";
    }
    else {
        cout << "Grade: F\n";
    }
    */

    /*
    *************************************
     2. Simple Calculator
    *************************************
    Ask user for Num1, type of operator Num2
    Example : 10 + 5 = 15
    *************************************
      Solution: Time: O(1), Space: O(1)
    *************************************
    double first_input{0}, second_input{0};
    char operation{' '};

    cout << "Enter an expression (e.g. 10 + 5): ";
    cin >> first_input >> operation >> second_input;

    if (!(cin >> first_input >> operation >> second_input)) {
    cout << "Invalid input\n";
     return 1;
    }

    switch(operation){
        case '+' : cout << (first_input + second_input) << endl;
                   break;

        case '-' : cout << (first_input - second_input) << endl;
                   break;
      
        case '*' : cout << (first_input * second_input) << endl;
                   break;   
                   
        case '/': if (second_input == 0) {
                cout << "Cannot divide by zero\n";
            } else {
                cout << first_input / second_input << '\n';
            }
            break;             
        
        case '%': if (second_input == 0) {
                cout << "Cannot calculate remainder with zero\n";
            } else {
                cout << fmod(first_input, second_input) << '\n';
            }
            break;

        default: cout << "Invlaid Operator " << operation; 
    }
    */

      /*
     *************************************
        3. Sum until 0
        user input 5, 10 , 0-> break;    
    *************************************
        Solution: Time: O(n) , Space O(1)
    *************************************
    int sum{0},input{0};
    while(true){
        cout << "Enter an integer value -> ";
     
        if (!(cin >> input)) {
            cout << "Invalid input\n";
            return 1;
        }
        if(input == 0){
            cout <<"Existing....\n";
            break;
        }
        else{
            cout << sum << " + " << input << " = " << (sum+=input) << "\n";
        }
    }
  */   


   /*
    *************************************
        4. Count input Digits
        Input : 123456
        o/p: 6 digits
        If you want to count leading zeros too, 
        you'd need to read the input as a std::string instead.
    **************************************************************************
     Solution: Time O(log n) repeatedly dividing by 10, Space: O(1)
    **************************************************************************
    int input{0}, count{0};

    cout << "Enter an integer value -> ";
    if(!(cin>>input))
    {
        cout << "Invlaid Input " << input;
        return 1;
    }

    if (input == 0) {
        count = 1;
    } else {
        if (input < 0) {
            input *= -1;
        }
    }
    
    while(input > 0){
        input /= 10;
        ++count;
    }
    cout << count << " Digits\n";
    */


      /*
    *************************************
     5. Reverse a Number
        Input: 12345 Output: 54321 
    ************************************************
    Solution: Time: O(log n) (you're processing the digits of the number,
    not performing a logarithmic operation inside another loop.) , 
    Space: O(1)  
    ************************************************
    int number{123456};
    int reverse_number{0};
    
    while(number>0){
        reverse_number = (reverse_number*10) + (number % 10);
        number/=10;
    }
    cout << reverse_number << endl;
    */


     /*
      *************************************
       6. Vector Statistics
         Given: vector<int> vec{4, 8, 2, 9, 1, 6}; 
        find: Sum, Average, Minimum, Maximum, Num of even values, Num of Odd values 
     *************************************
      Soltion : Time: O(n), Space: O(1) 
     *************************************
      vector<int> vec{4, 8, 0, -9, 186, 12};
    int sum{0},average{0},min_value{vec[0]}, max_value{vec[0]},even_elements{0},odd_elements{0};
   
    for(int i{0};i<vec.size();++i){
        vec[i] % 2 == 0 ? even_elements++ : odd_elements++; //Odd even elements
        sum+=vec[i]; //Sum of vec element
        if (vec[i] < min_value) {
        min_value = vec[i];
        }
        
        if (vec[i] > max_value) {
        max_value = vec[i];
        }
    
    }
    average = sum / vec.size(); //Average of vec elements 

    cout << "Sum : " << sum << "\nAverage : " << average 
    << "\nMin Value in Vec : " << min_value 
    << "\nMax Value in Vec : " << max_value 
    << "\nOdd Elements in Vec : " << odd_elements
    << "\nEven Elements in Vec : " << even_elements << endl; 
    */
    