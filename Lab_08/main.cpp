#include "Time.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

bool getTimeFromUser(Time &time) {			//takes in a time object by reference and returns true if valid time
	string input, hour, minute, second;
	int hours,minutes,seconds;
	getline(cin, input);
	
	hour = input.substr(0, input.find(":"));
	hours = atoi(hour.c_str());
	time.setHour(hours);				// call setHour with the hour substring

	minute = input.substr(input.find(":")+1 , input.find(":"));
	minutes = atoi(minute.c_str());
	time.setMinutes(minutes);			// call setMinutes with 
	
	second = input.substr(input.find_last_of(":")+1, input.length());
	seconds = atoi(second.c_str());
	time.setSeconds(seconds);

	if  (time.getHour() > 24)			// Call getter functions to check if time is in valid range and return true or false
		return false;
	else if (time.getHour() < 0 || time.getSeconds() < 0 || time.getMinutes() < 0)
		return false;
	else if (time.getMinutes() > 60 || time.getSeconds() > 60)
		return false;
		
	else
		return true;

}

void print24hour(Time time) {				//Print function that calls the getter functions
		if (time.getHour() < 10)
			cout << setfill('0') << setw(2);
		cout << time.getHour() << ":";
		if (time.getMinutes() < 10)
			cout << setfill('0') << setw(2);
		cout << time.getMinutes() << ":";
		if (time.getSeconds() < 10)
			cout << setfill('0') << setw(2);
		cout << time.getSeconds();

}

int main() {
	bool check;
	Time myTime;					//Create new Time object
	cout << "Enter the start time for the lecture (format is HH:MM:SS): " << endl;
	check = getTimeFromUser(myTime);
	if (check == false)
		cout << "The Start time entered is invalid" << endl;
	else {			//Only if first time is valid do we make a new Time object
		
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
