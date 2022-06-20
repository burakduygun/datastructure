#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <stdlib.h>

void Stack::create() {
	currSize = 0;
	q1 = new Queue();
	q2 = new Queue();
	q1->create();
	q2->create();
}

void Stack::close() {
	q1->close();
	q2->close();
}

void Stack::push(int value) {
	currSize++;

	q2->enQueue(value);

	while (!q1->isEmpty())
	{
		q2->enQueue(q1->deQueue());
	}

	while (!q2->isEmpty())
	{
		q1->enQueue(q2->deQueue());
	}
}

int Stack::pop() {

	if (q1->isEmpty())
	{
		return -1;
	}

	currSize--;
	return q1->deQueue();
}

int Stack::top()
{
	if (q1->isEmpty())
	{
		return -1;
	}
	return q1->front->data;
}

void Stack::write() {
	Node* temp;
	temp = q1->front;

	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}

