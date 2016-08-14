#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	int negatives = 0;
	cout << "Enter the size of the 2D array: ";
	
	cin >> n;
	
	int mat[n][n];	//2dimensional array
	if (n > 10)
		cout << "ERROR: your array is too large! Enter 1 to 10."; // Error checking
	if (n <= 0)
		cout << "ERROR: you entered an incorrect value for the array size!"; // Error checking
	if (n <= 10 && n > 0)
	{
		
		for (int i = 0; i < n; i++)
		{
			cout << "Enter the values in the array for row " << (i+1) << ", seperated by a space, and press enter:"; // Will print for each row
			
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &mat[i][j]);
				if (mat[i][j] < 0)
					negatives++; // add 1 to negatives if one of the values in the array is negative
			}
		}
	if (negatives == 0)
		cout << "All values are non-negative!";
	else if (negatives > 0)
		cout << "There are  " << negatives << " negative values!" << endl;
	
	}




	return 0;
}
