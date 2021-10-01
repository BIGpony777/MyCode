#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

int main() 
{
    try{
   UserInput in;
   double cookie = in.readDouble();
   const int cal = 75;

   cout << fixed << setprecision(2);
   cout << "Calories = " << cookie * cal << endl;


    return 0;}
    catch (const char * error){
        cout << "Please enter a valid integer." <<endl;
    }
}