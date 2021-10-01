#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

int main() 
{
    try{
   UserInput in;
   double gal = in.readDouble();
   double mil = in.readDouble();

   cout << fixed << setprecision(2);
   cout << "MPG =" << mil / gal << endl;


    return 0;}
    catch (const char * error){
        cout << "Please enter a valid integer." <<endl;
    }
}