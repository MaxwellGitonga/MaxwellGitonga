# include <iostream>
using namespace std;
int main ()
{

int mark;
cout<<"input mark";
cin>>mark;

if(mark>=70 && mark<=100)
{
	cout<<"A";
}

else if(mark>=60 && mark<=69)
{
	cout<<"B";
}

else if(mark>=50 && mark<=59)
{
	cout<<"C";
}

else if(mark>=40 && mark<=49)
{
	cout<<"D";
}

else if(mark<40)
{
	cout<<"Fail";
}

return 0;
}
