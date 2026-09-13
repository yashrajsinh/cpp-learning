#include<iostream>
using namespace std;
int main(){

    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const int number_of_valid_days{30};
    cout << "\n=============================================\n" 
    << "Hi, Welcome to Frank's Carpet Cleaning Sevice\n" 
    << "\nPrice per small room: $" << price_per_small_room
    << "\nPrice per large room: $" << price_per_large_room
    << "\nPlease note estimate is valid for " << number_of_valid_days << " days"
    << "\n=============================================\n";

    int number_of_small_rooms {0};
    int number_of_large_rooms {0};
    cout << "\nHow many small rooms would you like to cleaned?\t";
    cin >> number_of_small_rooms;
    cout << "How many large rooms would you like to cleaned?\t";
    cin >> number_of_large_rooms;
    cout << "Estimat for carpet cleaning service\n" 
       << "Total Small Rooms : " << number_of_small_rooms 
       << "\nTotal Large Rooms : " << number_of_large_rooms;
    
    double total_cleaning_cost{0};
       total_cleaning_cost = {
        (price_per_large_room * number_of_large_rooms) + 
        (price_per_small_room * number_of_small_rooms)};
    cout << "\nTotal cost before tax: $" << total_cleaning_cost;
    double tax_amount{0};
    const double tax_percentage{0.06};
   tax_amount = (total_cleaning_cost * tax_percentage);
   
   cout << "\nTax: $" << tax_amount 
   << "\n=============================================\n";
       double total_price_with_tax{0};
    total_price_with_tax = (total_cleaning_cost + tax_amount);
cout << "Total estimate with tax: $" << total_price_with_tax;
cout << "\n=============================================\n";
}