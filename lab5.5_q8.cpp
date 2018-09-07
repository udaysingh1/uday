//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
	//initiating
	int i, n;
	cout <<"Define n: ";
	cin >>n;
	//loop
	for (i=1;i<=n;i++){
		//print i stars for the ith line
		for (int a=0;a<i;a++){
			cout <<"* ";
			}
		cout <<endl;
		}
	//terminate
	return 777;
}
