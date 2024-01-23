#include <iostream>
using namespace std;
void calcAverage (int num1, int num2, int num3){
	int a;
	a=(num1+num2+num3)/3;
	cout<<"The average is ";
	cout<<a;
}
int main(){
	int num1;
	int num2;
	int num3;
	
	cout<<"Input the 3 numbers:";
	cin>>num1;
	cin>>num2;
	cin>>num3;
	calcAverage(num1, num2, num3);
	return 0;
}

