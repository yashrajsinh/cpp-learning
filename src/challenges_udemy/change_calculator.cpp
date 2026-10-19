#include<iostream>
#include<vector>
using namespace std;
/*
******************************
find first vowel 
******************************
Solution : Time O(n) Space : O(1)
******************************
    vector<char> vec{'f','r','a','n','k'};
  int index{0};
  bool isVowel = false;
    
    do{
        ++index;
        if(vec[index] == 'A' || vec[index] == 'a'){
            cout << "Vowel found: " << vec[index];
            isVowel = true;
            break;
        } else if(vec[index] == 'E' || vec[index] == 'e'){
             cout << "Vowel found: " << vec[index];
              isVowel = true;
              break;
        } else if(vec[index] == 'I' || vec[index] == 'i'){
             cout << "Vowel found:" << vec[index];
              isVowel = true;
              break;
        } else if(vec[index] == 'O' || vec[index] == 'o'){
             cout << "Vowel found: " << vec[index];
              isVowel = true;
              break;
        } else if(vec[index] == 'U' || vec[index] == 'u'){
             cout << "Vowel found: " << vec[index];
              isVowel = true;
              break;
        } 
    }while(vec.size());
    if(!isVowel){
      cout << "No Vowel was found";
    }
*/
/*
******************************
Change caculator programme
if user enters $1 
return what can possible change return option 

Dollars (1)
Quaters(0.25)
Dimes(0.10)
Nickles(0.05)
Pennis (0.01)
******************************
 Solution:
******************************
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

    int pennis = desired_amount;
   
    cout << "Dollars($1.00) : " << dollars << "\nQuaters($0.25) : " << quaters 
            << "\nDimes($0.10) : " << dimes << "\nNickles($0.05) : " << nikles 
            << "\nPennis($0.01) : " << pennis << endl;
*/

   /*
    Shipping Cost Calculator

    Ask the user for package dimension in inches
    lengh, width, height - these should be int only

    All dimension must be 10 or less inches or we can't ship

    base cost $2.50
    If volume is >100 cubic inches then 10% surcharge
    If volume >500 then 25% surcharge
    ******************************
    Solution: Time,Space : O(n)
    ******************************
    const int maximum_dimension{10};
    const double tier_one_surcharge{0.10}; //10% extra
    const double tier_two_surcharge{0.25}; //25% extra

    int package_lenght{0},package_height{0},package_width{0};
    double base_cost{2.50};

    cout << "Enter package Length,Width and Height followed by a space in Inches->\t";
    cin >> package_lenght >> package_width >> package_height;

     if((package_lenght<= maximum_dimension) && (package_width<= maximum_dimension) && (package_height<= maximum_dimension)){
        int package_volume = (package_lenght*package_width*package_height);
        cout << "Package size " << package_volume << " cubic inches"<< endl;
        if(package_volume>=500){
             base_cost = (base_cost) + (base_cost*tier_two_surcharge);
        } else if(package_volume>=100){
            base_cost = (base_cost) + (base_cost*tier_one_surcharge);
        } 
        cout << "Total cost of shipping: $" << base_cost << endl;
     }  else{
        cout << "Sorry,we couldn't process. The size exceeds our limit\n";
     } 
    
    */

int main(){
 /*
 Nested Loops - Sum of the Product of all Pairs of Vector Elements
Given a vector of integers named vec  that is provided for you, find the sum of the product of all pairs of vector elements.
You should declare an integer variable named result  and store the final product in this variable.

For example, given the vector  vec  to be c

Another example:
Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .

If the vector is empty or has only 1  element then the result  should be 0 .

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
 */

 vector<int> vec{1,2,3,4,5,6};
 int result{0};
 int sum{0};
 for(int i{0};i<vec.size();i++){
    sum += vec[i];
 }
 cout << "Pair sum " << sum*vec.size();
    
}