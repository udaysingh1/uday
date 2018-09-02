//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
           //initialising i, s and n
           int i=0, s=0, n;
           cout <<"Type a natural no n: ";
           cin >>n;
           //looping the sum of all eve i's from 0 to n
           while (i<=n){s=s+i;//adds i to the already existing sum if the loop is running
                        i+=2;//resets i to the next even no
                        }
           //display the result
           cout <<"The sum of all even numbers from 0 to "<<n<<" is: "<<s<<endl;
           //terminate
           return 777;
}













