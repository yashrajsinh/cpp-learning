#include<iostream>
using namespace std;
int main(){
    /* 
    ******************
    1. Array Declaration 
    ******************
    int a[5]{1, 2, 3, 4, 5};  // size + values
    int b[]{1, 2, 3, 4, 5};   // compiler determines size

    int c[5]{1, 2};           // remaining → 0
    int d[5]{};               // all → 0
    ****/
    cout << "Arary Program\n";

    /*
    ****************
    2. ARRAY PRINTING ALL ELEMENTS 
    ****************
    int values []{12,5,6,123,231};
    for(int i{0} ; i<(sizeof(values) / sizeof(values[0]));i++){
        cout << values[i] << "\n";
    }
    */
  
    /*
    3. FIND THE SUM 
    */
    int numbers [] {10,20,30,40};
    int size = (sizeof(numbers) / sizeof(numbers[0]));
    int sum {0};
    for(int i{0}; i<size;i++){
    sum += numbers[i];
    }
    cout << "Average " << (sum/size) << endl;
  


}