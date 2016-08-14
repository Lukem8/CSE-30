#include <iostream>
#include "Queue_char.h"

using namespace std;

int main() {
	Queue_char cqueue;		//new stack of chars
	cout << "Function call\t" << "Output\t" << "Front Queue Rear" << endl; //Top print statement tabbing the titles
	cout << "dequeue()\t";
	if (cqueue.isEmpty())	//print true for empty, false if not.
		cout << "exception\t";
	else if (cqueue.isEmpty()==0)
		cout << cqueue.front();
	cout << endl;
	cout << "enqueue(D)\t\t";
	cqueue.enqueue('D');
	cqueue.print();
	cout << endl;
	cout << "enqueue(A)\t\t";
	cqueue.enqueue('A');
	cqueue.print();
	cout << endl;
	cout << "dequeue()\t";
	cout << cqueue.dequeue() << "\t";
	cqueue.print();
	cout << endl;						//new line after each operation
	cout << "size()\t\t";
	cout << cqueue.size() << "\t";
	cqueue.print();
	cout << endl;
	cout << "enqueue(D)\t\t";
	cqueue.enqueue('D');
	cqueue.print();
	cout << endl;						//queue operations with tabs seperating them
	cout << "isEmpty()\t";
	if (cqueue.isEmpty())
		cout << "true\t";
	else 
		cout << "false\t";
	cqueue.print();
	cout << endl;
	cout << "front()\t\t";
	cout << cqueue.front() << "\t";
	cqueue.print();
	cout << endl;
	cout << "enqueue(T)\t\t";
	cqueue.enqueue('T');
	cqueue.print();
	cout << endl;
	cout << "front()\t\t";
	cout << cqueue.front() << "\t";
	cqueue.print();
	cout << endl;
	
	return 0;
}