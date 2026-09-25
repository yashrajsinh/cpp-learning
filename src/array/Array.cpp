#include<iostream>
using namespace std;
int main(){


    /* 
    **************************
     1. Array Declaration 
    **************************
    int a[5]{1, 2, 3, 4, 5};  // size + values
    int b[]{1, 2, 3, 4, 5};   // compiler determines size

    int c[5]{1, 2};           // remaining → 0
    int d[5]{};               // all → 0
    ****/
    cout << "Array Program\n";
    int numbers [] {1, 4, 2, 5, 3};
    /*
    ********************************
     2. ARRAY PRINTING ALL ELEMENTS 
    ********************************
    for(int i{0} ; i<(sizeof(values) / sizeof(values[0]));i++){
        cout << values[i] << "\n";
    }++

    */
  
    /*
    ************************
     3. FIND THE SUM 
    ************************
    int size = (sizeof(numbers) / sizeof(numbers[0]));
    int sum {0};
    for(int i{0}; i<size;i++){
    sum += numbers[i];
    }
    cout << "Average " << (sum/size) << endl;
    */
  
    /*
    ********************************
     4. FIND THE LARGEST NUMBER 
    ********************************
    int largest_number{0};
    for(int i=0; i< ((sizeof(numbers) / sizeof(numbers[i]))); i++){
        if(numbers[i] > largest_number)
        {
            largest_number = numbers[i];
        }
    }
    cout << "Largest Number in array is " << largest_number << endl;
    */
    
    /*
    ********************************
     5. FIND THE INDEX OF A NUMBER
    ********************************
    int index_value{0};
    int number {555};
    for(int i=0; i< (sizeof(numbers)/sizeof(numbers[0]));i++){
        if(numbers[i] == number){
            index_value = i;
            break;
        }
    }
    cout << "At " << index_value << endl;
    */
   
    /*
    ********************************
     7. FIND SECOND LARGEST ELEMENT 
    ********************************
    */
   
    /*
     ********************************
        8. REVERSE AN ARRAY (Without declaring a new ARRAY)
     ********************************
    int size = (sizeof(numbers) / sizeof(numbers[0]));
    int temp{0};
    for(int i{0}; i<(size/2);i++){
        temp = numbers[i];
        numbers[i] = numbers[size-1-i];
        numbers[size-1-i] = temp;
    }
    for(int i{0}; i<size;i++){
       cout << numbers[i] << endl;
    } 
    */
    /*

    ********************************************
     9. MOVING ALL ZEROS TO THE END 
    ***********************************************
    int size = (sizeof(numbers) / sizeof(numbers[0]));
    int zero_index{0};

    for (int i{0}; i < size; i++) {

    if (numbers[i] != 0) {

        if (numbers[zero_index] == 0) {
            int temp = numbers[i];
            numbers[i] = numbers[zero_index];
            numbers[zero_index] = temp;
        }
        zero_index++;
    }
    }

    for (int i{0}; i < size; i++) {
    cout << numbers[i] << endl;
    }
    */

    /*
    ********************************************
     10. Find Duplicate Elements
    ***********************************************
     Input: [1, 3, 4, 3, 5, 1]

     Output:
        1
        3


    int size = (sizeof(numbers) / sizeof(numbers[0]));
    for(int i{0};i<size; i++){
        bool found = false; //set false eveytime so our logic doesn't break
        for(int j{i+1};j<size;j++){
            if(numbers[i] == numbers[j]){
                found = true;
                break; //if we wanted to know how many times this could have been remvoed 
            }
        }
        if(found){
            cout << numbers[i] << endl; //print index value directly so no extra var requires 
        }
    }
    ********************************************
    */

    /*
    ********************************************
     10. Check if Array is Sorted
    ********************************************
    [1, 2, 3, 4, 5] → Sorted
    [1, 4, 2, 5, 3] → Not sorted
    *******************************************
    int size = (sizeof(numbers) / sizeof(numbers[0]));
     bool isSorted = true;
    for(int i=0;i<size-1;i++){
            if(numbers[i] > numbers[i+1]){
                isSorted = false;
                break;
            }
    }
      if(isSorted){
            cout << "Array is Sorted" << endl;
        }else {
        cout << "Array not sorted" << endl;
        }
        
    */

     /*
    ********************************************
    Find the Difference Between Maximum and Minimum
    *******************************************
}