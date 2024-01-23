#include <iostream>
#include <cctype>
using namespace std;
void casing(char letter){
	if (isupper (letter)){
		cout<<"The letter is an upper case letter.";
	}
	else if (islower(letter)){
		cout<<"The letter is a lower case letter.";
	}
	else {
		cout<<"Invalid";
}
}
int main()
{
	char letter;
	cout<<"Input letter:";
	cin>>letter;
	casing(letter);
	return 0;
}		


