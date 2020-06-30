#include<iostream>
using namespace std;
	int main()
	{
	//  First program
		cout<<"Hello World\n";  //standard output stream
		//return 0;  program executed successfully
		//ISO defines standards for cpp
		//latest standard is cpp17
	
	/*Second program
	Input and output are abstracted as streams
	cout & cin - o/p and i/p
	cerr - error std unbuffered error stream
	clog - std buffered stream
	*/
	//cout program
	cout<<"Hello World"<<endl<<"ABC\n";//<< is insertion operator.
	int x = 10, y = 20;
	cout<<x<<" "<<y<<endl;
	//cin program
	int a;
	cout<<"Enter x: ";
	cin>>x; //extraction operator
	cout<<"Square of x is "<<(x*x)<<endl;
	return 0;
	}
