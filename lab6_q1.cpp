//Tax Rate Calculation using Functions 
#include<iostream>
using namespace std;
// ask user to enter the values
// call the functions
// number as arguement 
// tell the  tax value to user
//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. 
int ask (int &x, int &y,int &z)
 	 	{
			 cout<< "enter the units = "<<endl;
			 cin>>x;
	 		 cout<< "enter the unitCst = "<<endl;
	 		 cin>>y;
	 		 cout<< "enter the taxRt = "<<endl;
			 cin>>z;
 	 	}
//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 	 
 	 	void sat (int& x, int& y,int& z)
 	 	{
	 		 int sat = x*y*z;
	 		 cout<< "salesTx = "<< sat <<endl;
 	 	}
 	 	void tot (int& x, int& y,int& z)
 	 	{
	 		 int tot = (x*y*z) + (x*y);
	 		 cout<< "totDue = "<< tot <<endl;
 	 	}
//Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 	 	
	 	int read (int& x, int& y,int& z)
	 	 { 
	 	    cout<< "The unit cost over the object is " <<y<< ". "<<"The number of units are "<<x<<". "<<"The tax rate is "<<c<<". "<<"the sales tax is "<<(x*y*z)<<". "<<"The total is "<<(x*y*z) + (x*y)<<endl; 
	 	 }
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
//driver function
	    int main ()
	 	{
//call by reference
	 	  	int x,y,z;
			ask(x,y,z);
	 	  	sat(x,y,z);
	 	  	tot(x,y,z);
	 	  	read(x,y,z);
//get the values
	 	  	return 0;
}
