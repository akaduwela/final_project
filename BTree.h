#ifndef BTREE_H
#define BTREE_H
#include <iostream>
#include <exception>
#include <string>
#include <cstdio>

using namespace std;

class BTree{
	BTreeNode *root; // Pointer to root node
	int t;  // Minimum degree   ????????
	int M; // max number of values in node
	int L; // mas number of values in leaf
public:

class BTreeNode{
public:
	string* name;
    BTreeNode **child_ptr;
    bool leaf;
    int n; // current number of keys

	BTreeNode(int _t, bool _leaf);   // Constructor
	void traverse(BTreeNode* p);
	int split_child(BTreeNode *x, int i);
	BTreeNode *search(int k);
	void insert(int a);

};


    // Constructor (Initializes tree as empty)
    BTree(int _t)
    {  root = NULL;  t = _t; }

};

#endif