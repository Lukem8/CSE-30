#ifndef QUEUE_H 
#define QUEUE_H
#include "LinkedList.h"
using namespace std;

class Queue : public LinkedList {		//Inherit from LinkedList
	public:
		Queue();				//Default consructor
		~Queue();				//Dectructor
		void enqueue(int value);
		int dequeue();
		int& front();
};

#endif

