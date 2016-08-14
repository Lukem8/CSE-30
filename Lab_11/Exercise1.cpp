#include "Queue.h"
#include <iostream>
using namespace std;

int main() {
	Queue queue;	//new object queue
	cout << "Is the queue empty? " << queue.isEmpty() << endl;	//see if queue is empty
	queue.front();	//get front element, error message if queue is empty
	queue.dequeue();	// remove front value, error message if empty
	queue.enqueue(5);
	queue.enqueue(2);
	queue.enqueue(1);		// adding values to the queue
	queue.enqueue(10);
	queue.enqueue(11);
	queue.enqueue(9);
	queue.enqueue(7);
	queue.enqueue(15);
	queue.enqueue(55);
	queue.enqueue(34);
	queue.enqueue(22);
	queue.enqueue(19);
	
	cout << "The size of the queue is " << queue.size() << endl;	//size of queue
	cout << "The front element of the queue is: " << queue.front() << endl;	//front element
	queue.dequeue();	//delete front element
	cout << "After dequeueing, the front element is: " << queue.front() << endl;	//new front element
	cout << "Here's the contents of the queue: " << endl;
	queue.print();		//prints all values in queue
	
	return 0;
}