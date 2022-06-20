#pragma once
#ifndef Queue_H
#define Queue_H

#include <stdio.h>
#include <iostream>

struct Node {
	int data;
	Node* next;
	Node();
};

struct Queue {
	Node* front;
	Node* rear;
	int count = 0;
	void create();
	void close();
	void enQueue(int);
	int deQueue();
	bool isEmpty();
};

#endif