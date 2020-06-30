#include<iostream>
using namespace std;
//variables and data types in cpp
int main()
{
	//memory is an array of bytes where every byte is addressed
	// var is a memory location with a name
	/*Data types
	char - 1 byte
	int - 4/8 bytes
	long int
	long long int
	float
	double
	bool
	unsigned char
	unsigned int
	*/
	cout<<sizeof(char)<<endl;
	cout<<sizeof(int)<<endl; //4 in my system
	int x;
	cout<<x<<endl; //no initialization - has a random value.
	return 0;
}
