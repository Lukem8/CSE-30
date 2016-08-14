#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;
	
	bool keyFound = false;
	int binarySearch(string* arr, int high, string k) {
	
		int low = 0;
		while (keyFound == false) {
		int mid = (high+low)/2;

		if (arr[mid] > k) {
			low = mid+1;
			continue;
		}
		if (arr[mid] < k) {
			high = mid-1;
			continue;
		}
		if (arr[mid] == k) {
			keyFound = true;
			return mid;	
		}
		
		}
		if (keyFound == false)
			return -1;
	
	}
	
	int checkArraySort(string* arr, int array_size) {
		
		bool isAscending = true;				// bools to check for ascending/descending
		bool isDescending = true;
		if (array_size > 0){	
			for (int i = 0; i < array_size; i++)
			{
			for (int j = i+1; j < array_size; j++)
			{
				if (arr[j] <= arr[i])			// Ascending loop
				{
					isAscending = false;
					break;
				}
			}
		}
		
			for (int i = 0; i < array_size; i++)
			{
			for (int j = i+1; j < array_size; j++)
			{
				if (arr[j] >= arr[i])			//Descending loop
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


	}
	

int main()
{
	int counter = 0;			// declaring counter for amount of data
	string key;
	
	ifstream file;
	file.open("words_in.txt");		// open file to read

	
		if (file.is_open()) {
			while(file.good()){
			while(!file.eof()){		// while not end of file increment counter
				string num;		
				getline(file, num);
				counter++;
		}
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
		}
	}
	

	int x = checkArraySort(arr, counter);	//call to function
	if (x==1 || x==-1) {
		cout << "Enter the key to search for: ";
		cin >> key;
		int found = binarySearch(arr, counter, key);
		if (found == -1)
			cout << "The key was not found";
		else 
			cout << "The key was found at index " << found << endl;
	}
	delete [] arr;				// delete array when done to free up memory
	file.close();
	
	return 0;
}
