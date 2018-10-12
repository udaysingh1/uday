#include <iostream>
using namespace std;
int power(int,int);
int main()
{
	int num=0;
	int pow=1;
	cout<<"Enter a number."<<endl;
	cin>>num;
	cout<<"Enter the power it has to raised to."<<endl;
	cin>>pow;
	int exponent=power(num,pow);
	cout<<num<<" raised to the power "<<pow<<" is "<<exponent<<endl;
	return 0;
}
int power(int n,int x)
{
	if(x==0)
	return 1;
	else
	return n*power(n,x-1);
}
