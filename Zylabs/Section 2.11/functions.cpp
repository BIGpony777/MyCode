#include "functions.h"
#include <string>
#include <locale>
#include <iostream>
using namespace std;
string makeCamel(string s[],int count ){
    locale l;
string total;
string f=s[0];
string k;
string sec[count];

for (int i=0; i<(f.size());i++){
f[i]= tolower(f[i],l);
}
total =f;

    for(int i=1;i<count;i++){

k= s[i];
for(int p=0; p<(s[i].size());p++){
    
k[p]=tolower(k[p], l);
}
k[0]=toupper(k[0],l);
sec[i]=k;
k="";
    }
    for (int i=0;i<count;i++){
        total=total+sec[i];
    }
    return total;
}