#include <iostream>
#include <stdio.h>

using namespace std;


	
	void sortArr(int arr[], int count, bool isAscending)		// Start of sorting function
	{
		
		int temp;		// temporary var to hold a var during switch			
		
		if (isAscending == true)		// check to see if user wants ascending
		{
			for (int i = 1; i < count; i++)	// for loop starting the algorithm
			{
				temp = arr[i];		// temp holding a value so it is not lost
				int j = i;		
				while (j > 0 && arr[j-1] > temp)	//checking to see if the last value is greater than the current
				{
					arr[j] = arr[j-1];		
					j = j-1;
				}
			arr[j] = temp;

			}
		}
	        if (isAscending == false)		// check to see if user wants descending
			{
				for (int i = 1; i < count; i++)
				{
					temp = arr[i];
					int j = i;
					while ( j> 0 && arr[j-1] < temp)
					{		
						arr[j] = arr[j-1];
						j = j-1;
					}
				arr[j] = temp;

				}
			}
	}								//LAST BRACE OF FUNCTION

	int main() 
	{
		
		int size;
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
	}								// LAST BRACE
