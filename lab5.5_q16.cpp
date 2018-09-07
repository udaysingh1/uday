//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
	//initiate
	int i, n, l=1;
	cout <<"Define n: ";
	cin >>n;
	//loop
	for (i=n;i>=1;i--){
		//print i-1 spaces
		for (int a=0;a<i-1;a++){
			cout <<"  ";
			}
		//print l plus
		for (int b=0;b<l;b++){
			cout <<"* ";
			}
		//make l=l+2
		l+=2;
		//end line
		cout <<endl;
		}
	//terminate
	return 777;
}
