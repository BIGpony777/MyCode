#include "functions.h"
#include <ctime>
#include <iostream>
using namespace std;


void swap(vector<int>& v, int i1, int i2)
{
   int temp = v[i1];
   v[i1] = v[i2];
   v[i2] = temp;
}
void shuffle(vector<int>& v)
{
    int j;
for(j=0;j<10;){
  int choice1 = rand()% v.size();
  int choice2 = rand()% v.size();
  if(choice1 != choice2){
    swap(v,choice1,choice2);
    j++;
  }
}
}