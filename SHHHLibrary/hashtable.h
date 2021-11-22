#pragma once 
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "client.h"

using namespace std;

class HashTable {
	static const int SIZE = 50; // twice size of customer base
	static const int Hash = 52;          // number for hashing
public:
	HashTable();   // constractor
	~HashTable();  // descturctor
	Client * getCustomer(int);       // return pointer  to the object customer
	bool putCustomer(int, Client *); // insert customer into hashtable
private:
	void makeEmpty();  // helper method to distructor
	void buildTable(); // helper method for constractor
	
	struct HashList;   // structure for linkned list at hashtable index
	struct HashEntry   // hashtable  structure
	{
		HashList * head;
	};

	struct HashList   // linked list that attached to index of table
	{
		Client * data;   //  hold customer
		int key;           // hold ID  (key)
		HashList * next;   // next
	};

	HashEntry table[SIZE];   // hastable array
};