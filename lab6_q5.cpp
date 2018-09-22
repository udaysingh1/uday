#include<iostream>
using namespace std;

int byvalue2(int x,int y)
{int z= x+y;
return z;}

void byreference2(int x,int y,int &sum)
{sum= byvalue2(x,y);
cout<<sum;}

int byvalue3(int x,int y)
{if(x>y)
return x;
else
return y; }

void byreference3(int x,int y,int &sum)
{sum= byvalue3(x,y);
cout<<"maximum="<<sum;}

int byvalue4(int x,int y)
{if(x<y)
return x;
else 
return y; }

void byreference4(int x,int y,int &sum)
{sum= byvalue4(x,y);
cout<<"minimum="<<sum;}

int main(){
int x,y,sum=0,choice;
cout<<"enter the numbers"<<endl;
cin>>x>>y;
cout<<"enter 1 for sum,2 for maximum,3 for minimum"<<endl;
cin>> choice;
if(choice==1)
{byvalue2(x,y);
byreference2(x,y,sum);}
else if(choice==2)
{byvalue3(x,y);
byreference3(x,y,sum);}
else if(choice==3)
{byvalue4(x,y);
byreference4(x,y,sum);}
else
cout<<"please enter correct choice"<<endl; 
return 0;}
