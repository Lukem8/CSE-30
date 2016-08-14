#include <iostream>
#include "Stack.h"


using namespace std;

int main(){
	
	Stack stack;		//new stack
	stack.push(5);
	stack.push(2);
	stack.push(11);
	stack.push(1);
	stack.push(5);
	stack.push(9);
	stack.push(4);
	stack.push(14);
	stack.push(18);
	stack.push(19);
	stack.push(12);
	cout << "The top element of the stack is: " << stack.top() << endl;
	cout << "The size of the stack is: " << stack.size() << endl;;
	cout << "Is the stack empty? (0=not Empty, 1=Empty) " << stack.isEmpty() << endl;;
	cout << "Here's the contents of the stack: " << endl;
	stack.print();
	
	return 0;
}