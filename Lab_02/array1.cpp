#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int size;
	int num = 0;
	bool a = true; // bool to check later for increasing/decreasing
	
	cout << "Enter the size of the array: ";
	cin >> size;
	if (size <= 0)
		cout << "ERROR: you intered an incorrect value for the array size! " << endl;
	else
		
		cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
	int arr1[size];
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			scanf("%d", &arr1[i]);
		}
	
		for (int i = 0; i < size; i++)
		{
			for (int j = i+1; j < size; j++)
			{
				if (arr1[j] <= arr1[i])
				{
					a = false; // changes bool value so we know it's decreasing
					break; // Does not need to keep checking if one of them isn't increasing
				}
			}
		}
			
		
		if (a == false)	
			cout << "This is NOT an increasing array! " << endl;
		else
			cout << "This IS an increasing array! " << endl;

		for (int i = 0; i < size; i++)
			cout << arr1[i] << " "; 

	}
		
	
	return 0;
} 
