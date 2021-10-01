#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

int main() 
{
    try{
   UserInput in;
   double NA = in.readDouble();
   double NB = in.readDouble();
   double NC = in.readDouble();
   const int A = 15;
   const int B = 12;
   const int C = 9;

   cout << fixed << setprecision(2);
   cout << "Total = $" << (NA*A)+(NB*B)+(NC*C) << endl;


    return 0;}
    catch (const char * error){
        cout << "Please enter a valid integer." <<endl;
    }
}