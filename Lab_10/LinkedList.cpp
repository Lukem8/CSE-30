#include <iostream>
#include "LinkedList.h"

//Constructor
LinkedList::LinkedList() {
	first = NULL;
	last = NULL;
}
//Destructor
LinkedList::~LinkedList() {		//SAME AS CLEAR function
	Node* tmp = first;
	Node* nextNode = first;
	while(tmp != last) {
		tmp = nextNode;
		nextNode = tmp->next;
		delete tmp;
	}
	delete last;
}	


void LinkedList::insertAtBack(int v) {		
	
	Node* newNode = new Node();
	newNode->val = v;
	newNode->next = NULL;
	if (first == NULL)			//check if empty
		first = newNode;
	if (last == NULL)
		last = newNode;	
	else {
		last->next = newNode;
		last = newNode;		//Make the new node the last node
	}
	
}

bool LinkedList::removeFromBack() {
	if (first == NULL)		//check if empty
		return false;
	if (first == last) {		//check if only one node
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	if (!isEmpty()) {			//find the node right before the last
		Node* newLast = first;
		while(newLast->next != last) 
			newLast = newLast->next;	//make it last
		delete last;	//delete last
		last = newLast;
		return true;
	}	
	
}

void LinkedList::print() {
	
	int s = 0;
	Node* tmp = first;
	Node* newLast = last;
	cout << last->val;		//Prints the last value of the list
	cout << ",";
	while(tmp!=newLast){
		
		if(tmp->next == newLast) {		//prints every value before last to first
			cout << tmp->val;
			cout << ",";
			newLast = tmp;
			tmp = first;
		}
		tmp = tmp->next;
	}
	cout << first->val;		//print first
	
}

bool LinkedList::isEmpty() {
	if (first == NULL)
		return true;
	else
		return false;

}

int LinkedList::size() {
	int size = 0;
	if (isEmpty())
		return 0;		//check if empty
	Node* tmp = first;
	Node* nextNode = first;
	while(nextNode != last) {
		tmp = nextNode;
		nextNode = tmp->next;	//go to next node
		size++;		//Increment size every time you move thru list
	}
	size++;
	return size;
}

void LinkedList::clear() {
	Node* tmp = first;		//create temporary nodes
	Node* nextNode = first;
	while(tmp != last) {		
		
		nextNode = tmp->next;	//move through the list 
		delete tmp;				// delete each node
		tmp = nextNode;
	}
	delete last;			//delete the last node
	first = NULL;			// set the first AND last pointers to null once list is empty
	last = NULL;
}

void LinkedList::insertAtFront(int value) {
	Node* newNode = new Node();		//create new node
	newNode->val = value;			//set value
	newNode->next = first;			//set next pointer
	first = newNode;			//make it first
	if (last == NULL)			//check if this is the first node
		last = newNode;
	
}

bool LinkedList::removeFromFront() {
	if (first == NULL)
		return false;		//check if empty
	if (first == last) {	//check for one node
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	if (!isEmpty()) {	//create temporary node 
		Node* tmp = first;
		first = tmp->next;	//move the first
		delete tmp;			//delete the temp
		return true;
	}
}
