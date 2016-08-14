#ifndef STACK_char_H 
#define STACK_char_H

#include "LinkedList_char.h"
using namespace std;

class Stack_char : public LinkedList_char		//Inherit from LinkedList_char
{
	public:
		Stack_char();	//Constructor
		~Stack_char();	//Destructor
		void push(char value);
		char pop();
		char& top();
	
};

#endif