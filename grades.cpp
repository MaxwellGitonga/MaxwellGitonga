//calculating average mark and the grade
#include<iostream>
using namespace std;
int main()
{
	//variable for physics,chemistry,biology,maths,computer and percentage average
	int phy,chem,bio,math,comp,percentageaver;
	cout<<"input mark for physics";
	cin>>phy,
	cout<<"input mark for chemistry";
	cin>>chem,
	cout<<"input mark for biology";
	cin>>bio;
	cout<<"input mark for mathematics";
	cin>>math;
	cout<<"input mark for computer";
	cin>>comp;
	
	percentageaver=(phy+chem+math+bio+comp)/5;
	
	
	if(percentageaver>=90)
	{
		cout<<"Grade A";
	}
	else if(percentageaver>=80)
	{
		cout<<"Grade B";
	}
	else if(percentageaver>=70)
	{
		cout<<"Grade C";
	}
	else if(percentageaver>=60)
	{
		cout<<"Grade D";
	}
	else if(percentageaver>=40)
	{
		cout<<"Grade E";
	}
	else if(percentageaver<40)
	{
		cout<<"Grade F";
	}
	return 0;
}

