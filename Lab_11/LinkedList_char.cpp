//SAME AS LinkedList.cpp except char values instead of integers
#include <iostream>
#include "LinkedList_char.h"

//Constructor
LinkedList_char::LinkedList_char() {
	first = NULL;
	last = NULL;
}
//Destructor
LinkedList_char::~LinkedList_char() {
	Node* tmp = first;
	Node* nextNode = first;
	while(tmp != last) {
		tmp = nextNode;
		nextNode = tmp->next;
		delete tmp;
	}
	delete last;
}	


void LinkedList_char::insertAtBack(char v) {		
	
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

bool LinkedList_char::removeFromBack() {
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

void LinkedList_char::print() {
	
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
bool LinkedList_char::isEmpty() {
	if (first == NULL)
		return true;
	else
		return false;

}

int LinkedList_char::size() {
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

void LinkedList_char::clear() {
	Node* tmp = first;
	Node* nextNode = first;
	while(tmp != last) {
		
		nextNode = tmp->next;
		delete tmp;
		tmp = nextNode;
	}
	delete last;
	first = NULL;
	last = NULL;
}

void LinkedList_char::insertAtFront(char value) {
	Node* newNode = new Node();
	newNode->val = value;
	newNode->next = first;
	first = newNode;
	if (last == NULL)
		last = newNode;
	
}

bool LinkedList_char::removeFromFront() {
	if (first == NULL)
		return false;
	if (first == last) {
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
	if (!isEmpty()) {
		Node* tmp = first;
		first = tmp->next;
		delete tmp;
		return true;
	}
}