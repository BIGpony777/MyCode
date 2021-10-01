#include <iomanip>
#include <iostream>
#include "FileReader.h"
#include "functions.h"

using namespace std;
int main(){
    try{
        FileReader f("times.txt");
        while(f.next()){
            double time =f.readDouble();
            cout<<fixed<<setprecision(2)<<fallingDistance(time)<<"meters in "<<time<<" seconds."<<endl;
        }

    }
      catch (const char * error)
    {
        cout << error << endl;
        return -1;
    }
}