#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int pro=1;
	int x=2;
	while(x<15)
	{
		cout<<x<<endl;
		sum=sum+x;
		pro=pro*x;
		x=x+2;
	}
	cout<<sum<<endl;
	cout<<pro<<endl;
	return 0;
}
