#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <stdlib.h>
using namespace std;

	int checkArraySort(int arr[], int array_max, int first, int last){
	
	arr[array_max];
	bool isAscending = true;
	bool isDescending = true;
	if (array_max > 0){	
		for (int i = first; i < last; i++)
		{
			for (int j = i+1; j <= last; j++)
			{
				if (arr[j] <= arr[i])			// Ascending loop
				{
					isAscending = false;
					break;
				}
			}
		}
		
		for (int i = first; i < last; i++)
		{
			for (int j = i+1; j <= last; j++)
			{
				if (arr[j] >= arr[i])			//Descending loop
				{
					isDescending = false;
					break;
				}
			}
		}
		
	}
	if (array_max < last)
		return -20;
	else if (last < first)
		return -10;
	else if (isAscending == true)
		return 1;
	else if (isAscending == false && isDescending == false)
		return 0;
	else if (isDescending)
		return -1;
	}

int main()
{
	

	int lowIndex;
	int hiIndex;
	const int array_max = 20;
	int arr[array_max];
	
	
	
	ifstream file;
	file.open("in.txt");
	ofstream out;
	out.open("out.txt");
	
	cout << "Enter beginning position to output: ";
	cin >> lowIndex;
	cout << "Enter ending position to output: ";
	cin >> hiIndex;
	
	
	if (file.is_open()) {
		int n = 0;
		while(file.good()){
			
			string num;
			getline(file, num);
			stringstream(num) >> arr[n];
			//arr[n] = atoi(num.c_str);		//Compile error
			n++;
		}
	}
	
	for (int i = lowIndex; i < hiIndex; i++){
		out << arr[i] << " ";
	}
	
	file.close();
	out.close();
	int x = checkArraySort(arr, array_max, lowIndex, hiIndex);
	if (x == -20 || x == -10)
		cout << "You are trying to check an invalid range of array elements! " << endl;
	else if (x == 1)
		cout << "The portion of array is sorted in ascending order! " << endl;
	else if (x == 0)
		cout << "The portion of the array is not sorted! " << endl;
	else if (x == -1)
		cout << "The portion of array is sorted in descending order! " << endl;
	return 0;
}
 
