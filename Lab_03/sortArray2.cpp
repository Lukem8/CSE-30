#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int size;
	int max;
	int num;
	int count = 0;
	
	
	cout << "Enter the size of the array: ";
	cin >> size;						// size is the size of the array
	if (size <= 0)
		cout << "ERROR: you intered an incorrect value for the array size! " << endl;		
	else
		
		cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
	int arr1[size];						// Creates array with size "size"
	if (size > 0)
	{
		
		
		for (int i = 0; i < size; i++)
		{
			scanf("%d", &arr1[i]); 			//Inputs all of the numbers into the array
		}
		
		for(int i = 0; i < size; i++)
		{
			for(int j = i+1; j < size; j++)
			{
				if(arr1[i] < arr1[j])
				{
					int x = arr1[i];
					arr1[i] = arr1[j];
					arr1[j] = x;
					count++;
			}
		}

		
		}
	cout << "This is a sorted array in descending order" << endl;
	
	for (int i = 0; i < size; i++)
		cout << arr1[i] << " ";
	
	cout << "The algorithm selected the maximum for the traverse of the array" << endl;

	}


	return 0;
}
