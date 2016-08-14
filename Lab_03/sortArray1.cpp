#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int size;
	int max;
	int num;

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

		for (int i = size-1; i >= 1; i--)		//For loop to start the sort algorithm
		{						// Minimum to maximum sort
			max = arr1[0];				// set max to first slot in array
			int imax = 0;				//index of temporary max
			for(int j = 1; j <= i; j++)
			{
				if (arr1[j] > arr1[imax])
				{
					max = arr1[j];
					imax = j;
				}
			
			}
			if (imax != i)
			{
				num = arr1[i];			// Swaps the current largest number with the last number in the array
				arr1[i] = arr1[imax];
				arr1[imax] = num;		
				
			}

		}
	cout << "This is a sorted array in ascending order" << endl;
	
	for (int i = 0; i < size; i++)
		cout << arr1[i] << " ";
	
	cout << "The algorithm selected the maximum for the traverse of the array" << endl;

	}


	return 0;
}
