#include <iostream>
using namespace std;
int main()
{
int number;
cout << "Enter an integer: ";
cin >> number;
if ( number > 0)//Condition 1
{
cout << "You entered a positive integer: " << number << endl;}
else if (number < 0)//condition
{
cout<<"You entered a negative integer: " << number << endl;}
else{
cout << "You entered 0." << endl;}
return 0;
}
