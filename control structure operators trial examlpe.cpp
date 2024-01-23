# include <iostream>
using namespace std;
int main ()
{
float Amount;
cout<<"input Amount:";
cin>>Amount;
if (Amount>30000)
{
Amount=Amount*10/100;
cout<<"The Discount is :"<<Amount<<endl;

}
else if(Amount<30000)
{
Amount=Amount*2/100;
cout<<"The Discount is :"<<Amount<<endl;
}
return 0;
}
