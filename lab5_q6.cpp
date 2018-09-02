//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialise year
           int year;
           cout <<"type a year in AD: ";
           cin >>year;
           //leap year comes once every 4 years. so modulus of all leap years with 4 is same. the leap year, 2012 has mod=0.=> all leap year are divisible by 4
           if (year%4==0){cout <<"This is a leap year."<<endl;}
           //otherwise the year must be ordinary
           else {cout <<"This is an ordinary year."<<endl;}
           //terminate
           return 777;
}
