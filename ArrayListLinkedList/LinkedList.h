#pragma once
#ifndef LinkedList_H
#define LinkedList_H

#include <stdio.h>
#include <iostream>

struct Node {
	int value;
	Node* next;
};

struct LinkedList {
	Node* head;
	void Create();
	void Add(int value, int index);
	void Update(int index, int value);
	void Remove(int index);

	void Write();
	void Clear();

	int count;
};

#endif

