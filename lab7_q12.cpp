#include <iostream>
using namespace std;
int lcm(int,int,int);
int main()
{
	int n1,n2=0;
	cout<<"Enter two numbers."<<endl;
	cin>>n1;
	cin>>n2;
	int a=(n1>n2)?n1:n2;
	int b=(n1>n2)?n2:n1;
	cout<<"The Lowest Common Multiple of "<<n1<<" and "<<n2<<" is "<<lcm(a,a,b);
	return 0;
}
int lcm(int z,int x,int y)
{
	if(z%y==0)
	return z;
	else
	return lcm(z+x,x,y);
}
