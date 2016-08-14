#include <iostream>
#include <stdio.h>

using namespace std;


	
	void sortArr(int arr[], int count, bool isAscending)
	{
		int max;
		int temp;
		
		if (isAscending == true)
		{
			for (int i = count-1; i >= 1; i--)		//For loop to start the sort algorithm
			{						// Minimum to maximum sort
				max = arr[0];				// set max to first slot in array
				int imax = 0;				//index of temporary max
				for(int j = 1; j <= i; j++)
				{
					if (arr[j] > arr[imax])
					{
						max = arr[j];
						imax = j;
					
					}
			
				}
				if (imax != i)
				{
					temp = arr[i];			// Swaps the current largest number with the last number in the array
					arr[i] = arr[imax];
					arr[imax] = temp;		
				
				}
		
			}
		}
		else if (isAscending == false)
			{
				for (int i = count-1; i >= 1; i--)		//For loop to start the sort algorithm
			{						// Minimum to maximum sort
				max = arr[0];				// set max to first slot in array
				int imax = 0;				//index of temporary max
				for(int j = 1; j <= i; j++)
				{
					if (arr[j] < arr[imax])
					{
						max = arr[j];
						imax = j;
					
					}
			
				}
				if (imax != i)
				{
					temp = arr[i];			// Swaps the current largest number with the last number in the array
					arr[i] = arr[imax];
					arr[imax] = temp;		
				
				}
		
			}


			}
	}								//LAST BRACE OF Function

	int main() 
	{
		
		int size;
		int max;
		int num;
		bool ascending;
	
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
			
			cout << "Sort in ascending (0) or descending (1) order?";		// asking the user how they want the array sorted
			cin >> num;
			if (num == 0)								// checking what the user entered if 0 then ascending, if 1, descending
				ascending = true;
			if (num == 1)
				ascending = false;
			
			sortArr(arr1, size, ascending);

			if (num == 0)
				cout << "This is a sorted array in ascending order" << endl;
			if (num == 1)
				cout << "This is a sorted array in descending order" << endl;
			for (int i = 0; i < size; i++)
				cout << arr1[i] << " ";
		}
			
	return 0;
	}								//Last BRACE
