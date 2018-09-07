//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
	//initialising i and n
	int i, n;
	cout <<"Define n: ";
	cin >>n;
	//loop
	for(i=1;i<=n;i++){
		//cout "+ " n times in the ith row
		for(int j=0;j<n;j++){
			cout <<"* ";
			}
		cout <<endl;//proceeds to the i+1th row
		}
	//terminate
	return 777;
}
