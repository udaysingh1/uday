//load the lib
#include<iostream>
using namespace std;
//main fn
int main(){
	//initialiser
	int i, n;
	cout <<"n: ";
	cin >>n;
	if (n%2!=0 && n>=3){
			//looop
			//printing first row
			for (i=1;i<=n;i++){
					cout <<"* ";
					}
			cout <<endl;
			for (i=2;i<=(n-1)/2;i++){
				//print the border plus
				cout <<"* ";
				//for ith row, i-2 spaces are introduced after printing one plus
				for (int j=0;j<i-2;j++){
					cout <<"  ";
					}
				//then one plus is printed
				cout <<"* ";
				//then (n-((i-2)*2+4))=n-2i spaces are printed
				for(int k=0;k<n-2*i;k++){
					cout <<"  ";
					}
				//then one plus is printed
				cout <<"* ";
				//then again i-2 spaces are printed
				for (int l=0;l<i-2;l++){
					cout <<"  ";
					}
				//one plus is printed and the row is complete!
				cout <<"* "<<endl;
				//this is only till (n-1)/2 rows!
				}
			//printing the middle row
			for (i=1;i==1;i=0){
				//print one plus
				cout <<"* ";
				//print (n-3)/2 spaces
				for (int m=0;m<(n-3)/2;m++){
					cout <<"  ";
					}
				//print one plus
				cout <<"* ";
				//again print (n-3)/2 spaces
				for (int p=0;p<(n-3)/2;p++){
					cout <<"  ";
					}
				//print one plus and end the line
				cout <<"* "<<endl;
				}
			//printing the bottom rows
			for (i=(n-1)/2;i>1;i--){
				//print one plus
				cout <<"* ";
				//for ith row(from the bottom), i-2 spaces are printed
				for (int q=0;q<i-2;q++){
					cout <<"  ";
					}
				//print one star
				cout <<"* ";
				//then n-2i spaces are printed
				for (int r=0;r<n-2*i;r++){
					cout <<"  ";
					}
				//then one plus is printed
				cout <<"* ";
				//again print i-2 spaces
				for (int s=0;s<i-2;s++){
					cout <<"  ";
					}
				//print one plus and end the line
				cout <<"* "<<endl;
				}
			//printing the last line
			for (i=1;i<=n;i++){
					cout <<"* ";
					}
			cout <<endl;
		}
	else {
		cout <<"n must be odd and more than or equal to 3 in order to make a diagonal"<<endl;
		}
	//terminate
	return 777;
}
