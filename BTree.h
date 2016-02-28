#ifndef BTREE_H
#define BTREE_H
#include <iostream>
#include <exception>
#include <string>
#include <cstdio>

using namespace std;

class BTree{


public:

class BTreeNode{
public:
	string* name;
    BTreeNode **child_ptr;
    bool leaf;
    int n;

BTreeNode();
void traverse(BTreeNode* p);
int split_child(BTreeNode *x, int i);
void insert(int a);

};


};

#endif