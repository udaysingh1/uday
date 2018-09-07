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
	//printing the first line
	for (i=1;i==1;i=0){
		//print n-i spaces
		for (int c=0;c<n-i;c++){
			cout <<"  ";
			}
		//printing n plus
		for (int d=0;d<n;d++){
		cout <<"* ";
		}
	}
	cout <<endl;
	//printing the rest of the lines except the last
	for (i=2;i<=n-1/*here i is the ith row of the rhombus*/;i++){
		//print n-i spaces
		for (int a=0;a<n-i;a++){
			cout <<"  ";
			}
		//print one plus
		cout <<"* ";
		//print n-2 spaces
		for (int b=0;b<n-2;b++){
			cout <<"  ";
			}
		//print one plus and end the line
		cout <<"* "<<endl;
	}
	//printing the last line
	for (i=0;i<n;i++){
		cout <<"* ";
	}
	cout <<endl;
	//terminate
	return 777;
}
