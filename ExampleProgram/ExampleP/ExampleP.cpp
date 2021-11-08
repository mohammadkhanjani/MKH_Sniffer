#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	int entered_password,password;
	srand(time(NULL));
	password=rand()%1000+1;
	cout << "Please Enter Password:(Beetween 1-1000):" << endl;
	cin >> entered_password;
	if(password==entered_password)
		cout << "Password is true";
	else
		cout << "Password is false";
	cin.get();cin.get();
}