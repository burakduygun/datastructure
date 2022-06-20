#pragma once
#ifndef Stack_H
#define Stack_H

#include "Queue.h"

struct Stack {
	Queue* q1;
	Queue* q2;
	int currSize;
	void create();
	void close();
	void push(int);
	int pop();
	bool isEmpty();
	int top();
	void write();
};

#endif
