#include <iostream>
using namespace std;
int main(){
	//declaring an array and initializing using an initializer
	int cocacola[6];
	int sum=0;
	for (int i=0;i<=5;i=i+1)
	{
	
	cout<<"Input the number of cocacola cans sold:";
	cin>>cocacola[i];
	sum=sum+cocacola[i];
}
cout<<"Total cans sold is:"<<sum;
	return 0;
}

