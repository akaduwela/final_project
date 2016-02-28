#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include <exception>
#include <string>
#include <cstdio>

#include "LinkedList.h"
using namespace std;

class HashTable{
public:
	class GraphNode{
	public:
		int key;
		LinkedList node;

	};
int hash (string str, int seed=0);
};
#endif