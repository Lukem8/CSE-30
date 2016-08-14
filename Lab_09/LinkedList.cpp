#include <iostream>
#include "LinkedList.h"

//Constructor
LinkedList::LinkedList() {
	first = NULL;
	last = NULL;
}
//Destructor
LinkedList::~LinkedList() {
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
	if (first == NULL)
		first = newNode;
	if (last == NULL)
		last = newNode;	
	else {
		last->next = newNode;
		last = newNode;
	}
	
}

bool LinkedList::removeFromBack() {
	if (first == NULL)
		return false;
	if (first == last) {
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	if (!isEmpty()) {
		Node* newLast = first;
		while(newLast->next != last) 
			newLast = newLast->next;	
		delete last;
		last = newLast;
		return true;
	}	
	
}

void LinkedList::print() {
	
	int s = 0;
	Node* tmp = first;
	
	while(s != size()) {
		cout << tmp->val;
		tmp = tmp->next;
		s++;
		if (s != size())
			cout << ",";
		
	}
	
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
		return 0;
	Node* tmp = first;
	Node* nextNode = first;
	while(nextNode != last) {
		tmp = nextNode;
		nextNode = tmp->next;
		size++;
	}
	size++;
	return size;
}

void LinkedList::clear() {
	Node* tmp = first;
	Node* nextNode = first;
	while(tmp != last) {
		//tmp = nextNode;
		nextNode = tmp->next;
		delete tmp;
		tmp = nextNode;
	}
	delete last;
	first = NULL;
	last = NULL;
}

void LinkedList::insertAtFront(int value) {
	Node* newNode = new Node();
	newNode->val = value;
	newNode->next = first;
	first = newNode;
}

bool LinkedList::removeFromFront() {
	if (!isEmpty()) {
		Node* tmp = first->next;
		delete first;
		first = tmp;
	}
}
