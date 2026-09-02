#include<iostream>
using namespace std;

int main(){
  int input_value;
  int value_second;

  cout << "Yo my man input a number between 1 and 100 ->\t";
  cin >> input_value;
  cout << "One more number bro ->\t";
  cin >> value_second;
  cout << "You wrote " << input_value << " and " << value_second << endl;


  /*
    We could also have two inputs at a time
  */
  
  cout << "Bruv enter 2 number with a spcae->\t";
  cin >> input_value >> value_second;
  cout << "So,you've got " << input_value << " and " << value_second << endl;
}
