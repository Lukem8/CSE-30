#ifndef QUEUE_CHAR_H 
#define QUEUE_CHAR_H
#include "LinkedList_char.h"
using namespace std;

class Queue_char : public LinkedList_char {		//Inherit from LinkedList
	public:
		Queue_char();				//Default consructor
		~Queue_char();				//Dectructor
		void enqueue(char value);
		char dequeue();
		char& front();
};

#endif