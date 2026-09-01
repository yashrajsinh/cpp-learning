/*
This program teachs how cpp command line args work
and types of it 
*/
#include<iostream>
using namespace std;
int main(int argc, char* argv[]){
    
    for(int i=0 ;i<argc;i++){
        cout << argv[i] << "\n";
    }  
}
