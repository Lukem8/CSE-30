#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int size;
	int num = 1;
	int value;
	
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
			scanf("%d", &arr1[i]);	//get the value and insert into the array
		}
	
	cout << "Enter the value to search for in the array: ";
	cin >> value;
	
	for (int i = 0; i < size; i++)		//iterate through the array to look for value
	{
		if (arr1[i] == value)		//see if current element is value
		{
			cout << "Found value " << value << " at index " << i << " which took " << num << " checks" << endl;
			break;
		}
		num++;
		if (num == size && arr1[i] != value)	//if we reach the end of the search
			cout << "The value was not found in the array! " << endl;
	}
	
	if (num == size)
		cout << "We ran into the worst case scenario! " << endl;
	
	if (num == 1)
		cout << "We ran into the best case scenario! " << endl;
	
	}


	return 0;
}
