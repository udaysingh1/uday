//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           // initialise a, b, c
           float a, b, c;
           cout <<"type the numbers: ";
           cin >>a>>b>>c;
           //if a>b and a>c then a is largest
           if (a>b && a>c){cout <<a<<endl;}
           //or if b>a and b>c then b is largest
           else if (b>a && b>c){cout <<b<<endl;}
           //otherwise c is largest assuming no two numbers are the same
           else {cout <<c<<endl;}
           //terminate
           return 777;
}
