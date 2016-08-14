#include "HTable.h"
#include <iostream>
#include <string>
using namespace std;

HTable::HTable() {		//Constructor
	max_size = 23;		
	dt = new data[max_size];	//make dt a data pointer array of size max_size
	for (int i = 0; i < max_size; i++){
		
		dt[i].key = -1;		//set all keys and values to -1,N/A
		dt[i].value = "N/A";
	}
	numel = 0;			//0 elements in table
	
} 

HTable::HTable(int t_size){	//Alternate constructor
	max_size = t_size;
	dt = new data[t_size];		//make dt a data pointer array of size t_size
	for (int i = 0; i < t_size; i++){
		
		dt[i].key = -1;		//set all keys and values to -1,N/A
		dt[i].value = "N/A";
	}
	numel = 0;			//0 elements in table
	
}

int HTable::hash(int &k) {		//hash function, passes in a key by reference
	int hash = k % max_size;	// hash is the key mod table size, we get a number inside the bounds of the HTable
	return hash;
}

int HTable::rehash(int &k) {	//rehash function passes in a key by reference
	int hash = (k+1) % max_size;	//Linear probing rehash
	return hash;
}

int HTable::add(data &d) {	//Pass in a data struct by reference to add
	int k = hash(d.key);	//get the hash of the key
	if (dt[k].key == -1) {	//if the table slot is available
		dt[k].key = d.key;	//set the key and value to that slot
		dt[k].value = d.value;
		numel++;			//increment num elements
		return 0;
	}
	int counter = 0;	
		while(dt[k].key != -1){		//while the index in the table is taken
			k = rehash(d.key);		//rehash
			if (counter == max_size)	//check if weve reached the end of the table
				return -1;			//leave loop if full
			counter++;				//increment counter
		}	
		
		dt[k].key = d.key;		//update table key and value
		dt[k].value = d.value;
		numel++;			//increment numel
		return 0;
	}


int HTable::remove(data &d) {	//remove function, pass in data struct by reference
	int k = hash(d.key);		//hash the data's key
	if (dt[k].key == d.key){	//if its the correct key
		dt[k].key = -1;			//update key and value to default
		dt[k].value = "N/A";
		numel--;		//decrement numel
		return 0;
	}
	int counter = 0;
		while(dt[k].key != d.key) {	//while its not the correct key
			k = rehash(d.key);		//rehash the key
			if (counter == max_size)	//if end of table
				return -1;				//exit loop
			counter++;		//increment counter
		}
		dt[k].key = -1;		//update key and value 
		dt[k].value = "N/A";
		numel--;			//decrement numel
		return 0;


}
void HTable::output() {
	for (int i = 0; i < max_size; i++) {
		cout << i << " ->" << dt[i].key << "\t" << dt[i].value << endl;		//OUTPUTS THE HTable index, key, and value
	}
}
