#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

bool a = false;

//binary search function
int binarySearch(int arr[], int hi, int low, int k){	

	int middle = (hi + low) / 2;	//find the middle index
	
	if (arr[middle] > k){
		hi = middle -1;
		return binarySearch(arr, hi, low, k);
	}
	else if (arr[middle] < k){
		low = middle + 1;
		return binarySearch(arr, hi, low, k);
	}
	else if (arr[middle] == k){
		a = true;
		return middle;
}
	
}
	
int checkArraySort(int arr[], int array_max){
	
	arr[array_max];
	bool isAscending = true;
	bool isDescending = true;
	if (array_max > 0){	
		for (int i = 0; i < array_max; i++)
		{
			for (int j = i+1; j < array_max; j++)
			{
				if (arr[j] <= arr[i])			// Ascending loop
				{
					isAscending = false;
					break;
				}
			}
		}
		
		for (int i = 0; i < array_max; i++)
		{
			for (int j = i+1; j < array_max; j++)
			{
				if (arr[j] >= arr[i])			//Descending loop
				{
					isDescending = false;
					break;
				}
			}
		}
		
	}
	
	if (isAscending == true)
		return 1;
	else if (isAscending == false && isDescending == false)
		return 0;
	else if (isDescending)
		return -1;
	}






int main () {
	const int array_max = 20;
	int arr[array_max];
	int index;
		
	ifstream file;
	file.open("in.txt");
	
	if (file.is_open()) {
		int n = 0;
		while(file.good()){
			
			string num;
			getline(file, num);
			stringstream(num) >> arr[n];
			n++;
		}
	}
	
	int x = checkArraySort(arr, array_max);
	if (x == 1 || x == -1) {
		int low = 0;
		int k;
		cout << "Input the search key: ";
		cin >> k;
		int index = binarySearch(arr, 20, low, k);
		
		if (a == true)
			cout << "Found key at index at " << index << endl;
		else if (a == false)
			cout << "The key was not found in the array!";
	}
		



return 0;
}
