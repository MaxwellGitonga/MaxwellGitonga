#include <iostream>
using namespace std;
void number(int num){
	if(num%2==0)
	{
	cout<<"Even number";
	}
	else{
		cout<<"Odd number";
	}
	}
int main()
{
	int a;
	cout<<"Input a number:";
	cin>>a;
	number(a);
	return 0;
}
