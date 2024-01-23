#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input integer";
	cin>>num;
	if(num%5==0&&num%11==0)
{
    cout<<"Divisible";
}
    else
{
    cout<<"Not divisible";	
}
return 0;
}
