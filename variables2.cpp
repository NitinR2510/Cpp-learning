#include<iostream>
using namespace std;
int x; //global varibale
int main()
{
	//int x=10;  //variable is searched for in the closest scope. 
	cout<<x<<endl;  //default value of global variable is 0.
	//new variable with same name in same scope only.
	static int y;//will remain in the program throughout the run. Does not change with scope.
	cout<<y<<endl;
	//static local var like global var are intialized at 0.
	const int z = 10;//value cannot be changed
	//z+=1; compiler error
	cout<<z<<endl; //const recommended over macros
	return 0;
}
