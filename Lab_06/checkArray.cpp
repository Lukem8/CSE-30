#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


	int checkArraySort(string* arr, int array_size) {
		
		bool isAscending = true;				// bools to check for ascending/descending
		bool isDescending = true;
		if (array_size > 0){	
			for (int i = 0; i < array_size-1; i++)
			{
			
				if (arr[i+1] <= arr[i])			// Ascending loop
				{
					isAscending = false;
					break;
				}
			
			}
		cout << isAscending << endl;
			for (int i = 0; i < array_size-1; i++)
			{
			
			
				if (arr[i+1] >= arr[i])			//Descending loop
				{
					isDescending = false;
					break;
				}
			}
		
		}
	
	if (isAscending == true)
		return 1;
	else if (isAscending == false && isDescending == false)
		return 0;
	else if (isDescending == true)
		return -1;
	


	}



int main()
{
	int counter = 0;			// declaring counter for amount of data
	
	
	ifstream file;
	file.open("words_in.txt");		// open file to read
			
	
		if (file.is_open()) {
		while(!file.eof()){
			string num;		// while not end of file increment counter
			getline(file, num);
			counter++;
		}
		}
		file.close();
		file.open("words_in.txt");
		
		string* arr;
		arr = new string[counter];	// dynamic array of strings
		if (file.is_open()) {
		
		int n = 0;
		while(file.good()){
			string num;
			getline(file, num);	// get current line from file set to num
		
			arr[n] = num;		// set num to nth entry of array
			n++;
			cout << arr[n] << endl;
		}
	}
	
	int x = checkArraySort(arr, counter); 	//call to function
	
	if (x == 1)
		cout << "The array is sorted in ascending order!" << endl;
	else if (x == 0)
		cout << "The array is not sorted!" << endl;
	else if (x == -1)
		cout << "The array is sorted in descending order!" << endl;
	

	delete [] arr;				// delete array when done to free up memory
	file.close();
	return 0;
}
