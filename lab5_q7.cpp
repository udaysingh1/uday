//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialise a
           char a;
           cout <<"Type: ";
           cin >>a;
           //a must lie between a and z or between A and Z in ascii for a to be an alphabet.
           if (a>='a' && a<='z' || a>='A' && a<='Z'){cout <<a<<" is an alplabet."<<endl;}
           else {cout <<a<<" is not an alphabet."<<endl;}
           //terminate
           return 777;
}
