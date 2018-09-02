//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialising a, i and n
           int a, i=1, n;
           cout <<"Multiplication table of: ";
           cin >>a;
           cout <<endl<<"Till number: ";
           cin >>n;
           //looping the multiplication of ath table from 1 to n
           while (i<=n){int mul=a*i;
                        cout <<a<<"*"<<i<<" = "<<mul<<endl;
                        i++;//this resets the next loop to show the multiplication for the next consecutive no
                        }
           //terminate
           return 777;
}
