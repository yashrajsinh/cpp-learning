#include<iostream>
using namespace std;

/*
Change caculator programme
if user enters $1 
return what can possible change return option 

Dollars (1)
Quaters(0.25)
Dimes(0.10)
Nickles(0.05)
Pennis (0.01)

*/

int main(){
    int desired_amount{0};
    
    cout << "Enter amount in cents -> ";
    cin >> desired_amount;


    int dollars = desired_amount/ 100;
   desired_amount %= 100;

    int quaters = desired_amount / 25;
   desired_amount %= 25;

    int dimes = desired_amount / 10;
    desired_amount %= 10;

    int nikles =  desired_amount / 5;
    desired_amount %= 5;

    int pennis = desired_amount / 1;
    desired_amount %= 1;

    cout << "Dollars($1.00) : " << dollars << "\nQuaters($0.25) : " << quaters 
            << "\nDimes($0.10) : " << dimes << "\nNickles($0.05) : " << nikles 
            << "\nPennis($0.01) : " << pennis << endl;

}