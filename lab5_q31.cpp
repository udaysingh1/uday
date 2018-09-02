//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialising n, i and s
           int i, n, s=0;
           cout <<"Type an integer > 0: ";
           cin >>n;
           i=n;
           //looping the division of n by 10 till i is less than 1 (i.e) the division exceeds the no of integers in n
           while (i>=1){i/=10;
                        s++;//when i gets divided by 10 holds true(as the loop will execute only when it is true), we add the no of integers by 1
                        }
           //print the results
           cout <<n<<" has "<<s<<" integers."<<endl;
           //terminate
           return 777;
}
