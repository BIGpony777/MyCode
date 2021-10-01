#include "functions.h"
#include <string>
using namespace std;

int calcScore(char rounds[], int size){
 int T= 0;
int i = 0;
int m;
int a;
int W= 1;
int L = -1;
int points = 0;
    while(i< size){
    if (rounds[i]==(W)){
        int j = 1;
        int k = 2;
        int f = 2;        
        for(m=0;m<k;++m){
        if(rounds[i-j]==W){
            
            j++;
            points = points+(W*f);
            k++;
            f+=2;
        }
        }
        points=points+W;
    }
    if (rounds[i]==(L)){
        int j = 1;
        int k = 2;
        int f = 2;        
        for(a=0;a<k;++a){
        if(rounds[i-j]==L){
            
            j++;
            points = points+(L*f);
            k++;
            f+=2;
        }
    }
        points=points+L;
    }

    
   i++; 
   }
 return points;
}

