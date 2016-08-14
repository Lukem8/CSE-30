#ifndef STACK_H 
#define STACK_H

#include "LinkedList.h"
using namespace std;

class Stack : public LinkedList  	// Inherit from LinkedList
{
	public:
		Stack();					//Constructor
		~Stack();					//Destructor
		void push(int value);
		int pop();
		int& top();
	
};

#endif