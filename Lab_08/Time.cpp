#include "Time.h"

Time::Time(){				//default constructor
	seconds = 0;
	minutes = 0;
	hours = 0;
}

Time::Time(int s, int m, int h) {	//Alternative constructor
	seconds = s;
	minutes = m;
	hours = h;

}
Time::~Time(){}				//Destructor

void Time::setSeconds(int s) {		//Set seconds
	seconds = s;
}

void Time::setMinutes(int m) {		//Set minutes
	minutes = m;
}

void Time::setHour(int h) {		//set Hour
	hours = h;
}

int Time::getSeconds(){			// get seconds
	return seconds;
}

int Time::getMinutes() {		//get minutes
	return minutes;
}

int Time::getHour() {			//get Hour
	return hours;	
}
