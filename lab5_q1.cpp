//load the lib
#include<iostream>
using namespace std;
//start the fn
int main(){
           //initialise a, b
           float a, b;
           cout <<"Type the numbers: ";
           cin >>a>>b;
           //if a>b then a is largest
           if (a>b){cout <<"The largest number is "<<a<<endl;
                    }
           //else b is largest
           else if (b>a){cout <<"the largest number is "<<b<<endl;
                         }
            //or if a=b then both are largest
           else{cout <<"Both are the same numbers."<<endl;
                }
           //terminate
           return 777;
}
