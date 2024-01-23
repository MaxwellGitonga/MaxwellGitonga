//calculating the commision earned
#include<iostream>
using namespace std;
int main()
{
	//variable for  monthly total sales
	int s;
	//variable for name of sales person 
	string name;
	//variable for commission
	int c;
	cout<<"name:";
	getline(cin,name);
	cout<<"monthly sales:";
	cin>>s;
	
	if(s>=20000&&s<=80000)
	{
		c=s*0.02;
	}
	
	else if(s>=80001&&s<=120000)
	{
		c=s*0.05;
	}
	
	else if(s>=120000)
	{
		c=s*0.1;
	}
	
	cout<<"Commision Due:"<<c<<endl;
	return 0;
}

