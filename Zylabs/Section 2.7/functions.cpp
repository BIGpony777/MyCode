#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include "UserInput.h"

string computerMove(){
   int j= (rand()%3);
if (j==1){
return "rock";
}
if(j==2){
return "paper";
}
if(j==3){
    return "scissors";
}
return "";
}

string userMove(){
    
   UserInput in;
     string p=in.readString();
     
if(p=="rock"||p=="paper"||p=="scissors"){
    return p;
}else{return " ";
userMove();
}
}
     

string findWinner(string c, string u){
if(c=="rock"&&u=="rock"){
    return "tie";
}
if(c=="paper"&&u=="paper"){
    return "tie";
}
if(c=="scissors"&&u=="scissors"){
    return "tie";
}
if(c=="rock"&&u=="paper"){
    return "user";
}
if(c=="rock"&&u=="scissors"){
    return "computer";
}
if(c=="paper"&&u=="rock"){
    return "computer";
}
if(c=="paper"&&u=="scissors"){
    return "user";
}
if(c=="scissors"&&u=="rock"){
    return "user";
}
if(c=="scissors"&&u=="paper"){
    return "computer";
}
return " ";
}
