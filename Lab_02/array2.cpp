#include <iostream>
#include <string> // Need to use strings
#include <stdio.h> 

using namespace std;

int main()
{
	string st1;
	cout << "Enter the string to reverse: ";
	cin >> st1;

	string reverse = string(st1.rbegin(), st1.rend()); // rbegin() and rend() functions

	cout << reverse << endl;





	return 0;
} 

