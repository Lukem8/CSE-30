#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//atof == string to double
//atoi string to integer


struct Time {

	int hour;
	int minute;							
	int second;


};

bool getTimeFromUser(Time &time) {
	string input, hour, minute, second;
	getline(cin, input);
	
	hour = input.substr(0, input.find(":"));
	time.hour = atoi(hour.c_str());

	minute = input.substr(input.find(":")+1 , input.find(":"));
	time.minute = atoi(minute.c_str());
	
	second = input.substr(input.find_last_of(":")+1, input.length());
	time.second = atoi(second.c_str());

	if  (time.hour > 24)
		return false;
	else if (time.hour < 0 || time.second < 0 || time.minute < 0)
		return false;
	else if (time.minute > 60 || time.second > 60)
		return false;
		
	else
		return true;


}

void print24hour(Time time) {
		if (time.hour < 10)
			cout << setfill('0') << setw(2);
		cout << time.hour << ":";
		if (time.minute < 10)
			cout << setfill('0') << setw(2);
		cout << time.minute << ":";
		if (time.second < 10)
			cout << setfill('0') << setw(2);
		cout << time.second;

}


int main() {
	bool check;
	Time myTime;
	cout << "Enter the start time for the lecture (format is HH:MM:SS): " << endl;
	check = getTimeFromUser(myTime);
	if (check == false)
		cout << "The Start time entered is invalid" << endl;
	else {
		
		Time endTime;
		cout << "Enter the end time for the lecture (format is HH:MM:SS): " << endl;
		check = getTimeFromUser(endTime);
		if (check == false)
			cout << "The end time entered is invalid" << endl;
		else {

			cout << "The lecture starts at ";
			print24hour(myTime);
			cout << " and ends at ";
			print24hour(endTime);
			cout << "" << endl;
		}
	}
	
return 0;
}
