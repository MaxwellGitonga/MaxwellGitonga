#include <iostream>
using namespace std;
int qp(int average)
{
if (average >= 90 && average <= 100)
return 4;
else if (average >= 80 && average <= 89)
return 3;
else if (average >= 70 && average <= 79)
return 2;
else if (average >= 60 && average <= 69)
return 1;
else if (average > 60)
return 0;
else
{
	cout<<"Invalid"<<endl;
	return -1;
}
}

int main()
{
	int student_average;
	cout<<"Enter the student average: ";
	cin>>student_average;
	
	int rank=qp(student_average);
	cout<<"Quality points is: "<<rank<<endl;
	return 0;
}
