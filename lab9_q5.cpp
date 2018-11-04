#include <iostream>
using namespace std;
//main function
int main(){
   char c[10] ="abcde";
   char* cptr;
   cptr=c;
   //looping statement
   for(int i=10;i>=0;i--)
   {
       cout<<*(cptr+i);
   }
   //return statement
   return 0;
}
