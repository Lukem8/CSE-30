#include "Stack_char.h"
#include <iostream>

using namespace std;

Stack_char::Stack_char(){}
Stack_char::~Stack_char(){}
void Stack_char::push(char value){		//insert a new value to front of stack
	insertAtFront(value);
}
char Stack_char::pop(){		//removes top element, returns the element value
	char x = first->val;
	removeFromFront();
	return x;
}
char& Stack_char::top(){	//returns the top elements value
	return first->val;
}