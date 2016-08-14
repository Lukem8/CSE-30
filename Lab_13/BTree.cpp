#include "BTree.h"
#include <iostream>

using namespace std;

BTree::BTree() {	//Constructor, initializes root to NULL
	root = NULL;
}

BTree::~BTree() {	//Destructor, calls destroy_tree
	destroy_tree();
}

Node* BTree::BTree_root() {	//returns pointer pointing to root of tree
	return root;
}

void BTree::destroy_tree(Node *leaf) {		//pass in a node to destroy the tree
		
		if (leaf != NULL){				//if leaf exists
			destroy_tree(leaf->left);	//recursively destroy left child
			destroy_tree(leaf->right);	//recursively destroy right child
			delete leaf;				//delete the node
		}
	}


void BTree::insert(int key, Node *leaf){		//insert function
	
	if (key < leaf->key_value){		//check to see what side of the tree to place the node
		if (leaf->left != NULL)		//if the node is taken, recursively call with that node as new input argument
			insert(key, leaf->left);
		else {
		leaf->left = new Node;		//otherwise if the node isn't taken, create a new node and initialize members
		leaf->left->key_value = key;
		leaf->left->left = NULL;
		leaf->left->right = NULL;
	}
	}
	else if (key >= leaf->key_value){		//other side of the tree, if key is greater, we check all the right sides
		if (leaf->right != NULL)		//same logic as above in function
			insert(key, leaf->right);
		
		else{
			leaf->right = new Node;
			leaf->right->key_value = key;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
	}
}


Node* BTree::search(int key, Node *leaf){		//search function for a key
	if(leaf!=NULL) {		//if leaf is not null
		if(key==leaf->key_value)	//if we found the key at the leaf return the leaf
			return leaf;
		if(key<leaf->key_value)	//if key is less than leafs value, recursively call the same function with the left child
			return search(key, leaf->left);
		else						//otherwise recursively call the right child as new argument
			return search(key, leaf->right);
	}
	else 
		return NULL;	//if not found return null
}

void BTree::insert(int key) {
	if (root != NULL){		//if we have a root, call the other insert function with root as parameter
		insert(key, root);
	}
	else {
		root = new Node;		//otherwise, initialize the node and its members
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

Node* BTree::search(int key){
	return search(key, root);	//search for this key using other function, pass in the root
}

void BTree::destroy_tree() {
	destroy_tree(root);			//call other function with root as parameter
}


