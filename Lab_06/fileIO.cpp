#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	int counter = 0;			// declaring counter for amount of data
	
	
	ifstream file;
	file.open("words_in.txt");		// open file to read
	ofstream out;
	out.open("words_out.txt");		// open file to write
	
		if (file.is_open()) {
			
			while(!file.eof()){		// while not end of file increment counter
				string num;		
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
		}
	}
	
	for (int i = 0; i < counter; i++){
		out << arr[i] << endl;
	}
	
	delete [] arr;				// delete array when done to free up memory
	file.close();
	out.close();
	return 0;
}
