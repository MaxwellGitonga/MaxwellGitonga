#include <iostream>
using namespace std;
int main()
{
	int x;
	int sum=0;
	int pro=1;
	
	for(x=2;x<15;x=x+2)
	{
		cout<<x<<endl;
		sum=sum+x;
	    pro=pro*x;
	}
	cout<<sum<<endl;
	cout<<pro<<endl;
	return 0;
}
