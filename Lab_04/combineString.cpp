#include <iostream>
#include <string>
using namespace std;

	string combineStr(string str, int count)			// Start of the combineStr function
	{
		string s1 = str;					// variable to hold the first string
		for(int i = 1; i < count; i++)				// for loop to add on to the string "count" times
		{
			
			str = s1+str;					//adding to the string
		}				
	

	return str;							//return statement

	}

	int main()
	{
		string n;						// Variable to hold the first string
		int times;
		while(true)
		{						// Variable to hold the amount of times 
		cout << "Enter a string:";
		cin >> n;						// user input to variable n
		cout << "Enter a number of times:";		
		cin >> times;						// user input to variable times
		if (times == 0)
			break;
				
		if(times > 0)						// if statement to make sure that the number of times is not 0 or negative
			cout << "The resulting string is: " << combineStr(n,times) << endl;				// Final print statement and call to the combineStr function
		}
	return 0;
	}
