#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if (n<0){
		cout<<"Invalid input/negative number found";
	}
	else{
		cout<<(n*(n+1))/2<<endl;
	}
	//another possible method is using for loop
	if (n<0){
		cout<<"Error"<<endl;
	}
	else{
		int i=0, sum=0;
		for(;i<=n;i++){
			sum = sum+i;
		}
		cout<<sum;
	}
	return 0;
}
