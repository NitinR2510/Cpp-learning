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
	cout<<"Enter a: ";
	cin>>a; //extraction operator
	cout<<"Square of a is "<<(a*a)<<endl;
	//note:
	int c, d;
	cout<<"Enter c: "<<endl;
	cin>>c;
	cout<<"Enter d: "<<endl;
	cin>>d;
	cout<<" c times d is "<<(c*d);
	//if I enter two numbers while entering c, the program does not wait to enter d
	//this is due to buffering.
	//i.e c space d enter buffer. Input is buffered thus.
	//endl flushes the buffer.
	return 0;
	}
