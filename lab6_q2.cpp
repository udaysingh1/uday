#include<iostream>
using namespace std;

int byvalue(int x,int y)
{int z= x+y;
return z;}

void byreference(int x,int y,int &sum)
{sum= byvalue(x,y);
cout<<sum;}

int main(){
int x,y,sum=0;
cout<<"enter the numbers"<<endl;
cin>>x>>y;
byvalue(x,y);
byreference(x,y,sum);
return 0;}
