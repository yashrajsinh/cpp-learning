#include<iostream>

using namespace std;

int main(){
    int age;
    cout << "Yo, why don't you tell me how old are you foo ??\n";
    cin >> age;
    if(age<17 || age>95){
        cout << age << " Not eligible to vote go away affura!!\n";
    }
    else{
    cout << "Cool, you can vote but do you really wanna ??\n";
    }
}
