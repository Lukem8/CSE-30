#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){}		//Constructor
Stack::~Stack(){}		//Destructor
void Stack::push(int value){
	insertAtFront(value);	
}
int Stack::pop(){
	int x = first->val;	//save first value
	removeFromFront();	//remove front node
	return x;			//return the first value in the stack that was deleted
}
int& Stack::top(){
	return first->val;	//return top of stack
}