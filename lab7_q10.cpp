#include <iostream>
using namespace std;
int fibo(int);
int main()
{
	int term=0;
	cout<<"Enter the number of trems in the Fibonacci series."<<endl;
	cin>>term;
	cout<<"The "<<term<<"th Fibonacci number is "<<fibo(term)<<endl;
	return 0;
}
int fibo(int n)
{
	if(n==1||n==2)
	return 1;
	else
	return (fibo(n-1)+fibo(n-2));
}
