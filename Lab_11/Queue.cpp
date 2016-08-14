#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(){}	//contructor
Queue::~Queue(){}	//destructor
void Queue::enqueue(int value){
	insertAtBack(value);			//insert value at back of queue
}
int Queue::dequeue(){
	try {				//try to see if its empty
		if (isEmpty())
			throw 0;		// throw error
		else {
		int x = first->val;
		removeFromFront();
		return x;
		}
	}
	catch (int e)		//catch if error was thrown
	{
		
		cout << "Call to dequeue() generated an exception, because the queue is empty " << endl;
	} 
}
int& Queue::front(){
	try {		//try to see if its empty
		if (isEmpty())
			throw 0;	//throw error
		else
			return first->val;
	}
	catch (int e)		//catch if error was thrown
	{
		cout << "Call to front() generated an exception, because the queue is empty " << endl;
	}
}
