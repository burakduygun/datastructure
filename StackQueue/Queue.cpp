#include "Queue.h"
#include <iostream>
#include <stdlib.h>

void Queue::create() {
	front = nullptr;
	rear = nullptr;
	count = 0;
}

Node::Node() {
	next = nullptr;
}

void Queue::close() {
	Node* q;
	while (front)
	{
		q = front;
		front = front->next;
		delete q;
	}
}

bool Queue::isEmpty() {
	return count == 0;
}

void Queue::enQueue(int value) {
	if (rear == nullptr)
	{
		front = rear = new Node;
		rear->data = value;
	}
	else
	{
		Node* newnode = new Node;
		newnode->data = value;
		rear->next = newnode;

		rear = newnode;
	}
	count++;
}

int Queue::deQueue() {
	if (front == nullptr)
	{
		std::cout << "List is empty" << std::endl;
		return -1;
	}

	int temp = front->data;
	Node* newFront = front->next;
	delete front;
	front = newFront;
	if (front == nullptr)
	{
		rear = nullptr;
	}
	count--;

	return temp;
}