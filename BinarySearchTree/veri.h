#ifndef veri_h
#define veri_h

#include <stdio.h>
#include <iostream>

#define LENGTH 68	

extern int arr1[LENGTH];
extern int arr2[LENGTH];
extern int arr3[LENGTH];

struct Node
{
	int value;
	Node* right;
	Node* left;
};

struct BinarySortTree
{
	Node* root;
	void installTree(int*);
	void closeTree();
	void Add(int);
};

bool DFS(Node*, int);
bool BFS(Node*, int);

#endif


