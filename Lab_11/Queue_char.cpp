#include "Queue_char.h"
#include <iostream>

using namespace std;
//SAME AS queue.cpp except for char is the value stored in each node
Queue_char::Queue_char(){}	//contructor
Queue_char::~Queue_char(){}	//destructor
void Queue_char::enqueue(char value){
	insertAtBack(value);
}
char Queue_char::dequeue(){
	try {
		if (isEmpty())
			throw 0;
		else {
		char x = first->val;
		removeFromFront();
		return x;
		}
	}
	catch (int e)
	{
		
		cout << "Call to dequeue() generated an exception, because the queue is empty " << endl;
	} 
}
char& Queue_char::front(){
	try {
		if (isEmpty())
			throw 0;
		else
			return first->val;
	}
	catch (int e)
	{
		cout << "Call to front() generated an exception, because the queue is empty " << endl;
	}
}