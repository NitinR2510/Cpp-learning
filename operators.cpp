#include<iostream>
using namespace std;

int main()
{
	int x = 5, y = 10;
	double s,w,z;
	
	w = x/y; //integer/integer = integer
	s = (double)x/y; //c-like type-casting
	z = static_cast<double>(x)/y; //checks if type casting is 
	
	cout<<w<<" "<<s<<" "<<z<<endl;
	
	/*others include >,<,==,=,!=, >=,<=, !, ||, && and compound 
	operators like += -= *= /=, %=*/
	
	//short-curcuiting
	bool ans = (x==y)&&(y++); 
	//x is not incremented
	
	cout<<ans<<" and "<<x<<endl;
	
	//comma operator - wierdo
	int a = (x,y);//last value
	cout<<a<<endl;
	
	return 0;
}
