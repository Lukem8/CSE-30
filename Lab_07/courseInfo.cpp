#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

struct Time {

	int hour;
	int minute;							
	int second;


};

struct Course {

	string name;
	int credits;
	bool majorRequirement;
	double avgGPA;
	string days;
	Time startTime;
	Time endTime;

};

void output() {

	cout << "−−−−−−−−−−−−−−−−−−−\nSCHEDULE OF STUDENT\n−−−−−−−−−−−−−−−−−−−" << endl;
}

int main() {
	int count;
	string numClasses;
	ifstream file;
	file.open("in.txt");			// open file to read
	getline(file, numClasses);		// set the first line to string numClasses
	stringstream(numClasses) >> count;	// string to integer
	
	Course classes[count];
	string creds;
	string majReq;
	string averageGPA;
	string start;
	for (int i = 0; i < count; i++) {
		getline(file, classes[i].name);
		getline(file, creds);
		stringstream(creds) >> classes[i].credits;
		getline(file, majReq);
		stringstream(majReq) >> classes[i].majorRequirement;
		getline(file, averageGPA);
		stringstream(averageGPA) >> classes[i].avgGPA;
		getline(file,classes[i].days);
		getline(file, start);	 

	}
	output();

return 0;
}
