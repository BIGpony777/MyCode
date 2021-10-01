#include "functions.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "FileReader.h"
using namespace std;

void readFile(const string& filename,int grid[][3] ){
    FileReader in(filename);

    int j =0;
        for(int i=0; i<3;i++){
            in.next();            
            grid[j][i]=in.readInt();
            if(j<3&&i>2){
            i=0;
            j++;
            }
            }
        }

bool isMagicSquare(int a[][3]){
    int x = a[0][0]+a[1][0]+a[2][0];
if(a[0][0]+a[1][0]+a[2][0]==x && a[0][1]+a[1][1]+a[2][1]==x && a[0][2]+a[1][2]+a[2][2]==x && a[0][0]+a[0][1]+a[0][2]==x&& a[1][0]+a[1][1]+a[1][2]==x&& a[2][0]+a[2][1]+a[2][2]==x && a[0][0]+a[1][1]+a[2][2]==x && a[0][2]+a[1][1]+a[2][0]==x){
    return true;
}else{
    return false;
}
    
}
