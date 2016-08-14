#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

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
	return 0;
}
