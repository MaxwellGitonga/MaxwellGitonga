#include <iostream>
using namespace std;
int area(int l)
{
	int a=l*l;
	cout<<"The area is "<<a<<endl;
	return a;
}
int perimeter(int l)
{
	int p=l+l+l+l;
	cout<<"The perimeter is "<<p<<endl;
	return p;
}
int main()
{
	int s;
	cout<<"VAL";
	cin >>s;
	
int sa=area(s);	
int sp=perimeter(s);

return 0;	
}
