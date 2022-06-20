#include "LinkedList.h"
#include <iostream>
#include <stdlib.h>

void LinkedList::Create() {
	head = NULL;
	count = 0;
}

void LinkedList::Add(int index, int value) {

	if (index < 0)
	{
		std::cout << "index cannot be less than 0" << std::endl << std::endl;
		return;
	}

	int currIndex = 1;
	Node* currNode = head;

	while (currNode && index > currIndex) {
		currNode = currNode->next;
		currIndex++;
	}

	if (index > 0 && currNode == NULL) {
		std::cout << "index cannot be greater than count" << std::endl << std::endl;
		return;
	}

	Node* newNode = new	Node;
	newNode->value = value;
	if (index == 0) {
		newNode->next = head;
		head = newNode;
	}
	else {
		newNode->next = currNode->next;
		currNode->next = newNode;
	}
	count++;
}

void LinkedList::Write() {

	Node* temp;
	temp = head;

	for (int i = 0; i < count; i++)
	{
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
}

void LinkedList::Update(int index, int value) {

	Node* temp;
	temp = head;

	for (int i = 0; i <= index; i++)
	{
		if (i == index)
		{
			temp->value = value;
		}
		temp = temp->next;
	}
}
void LinkedList::Remove(int index) {
	Node* prevNode = NULL;
	Node* currNode = head;
	int currIndex = 1;
	while (currNode && index >= currIndex) {
		prevNode = currNode;
		currNode = currNode->next;
		currIndex++;
	}
	if (currNode) {
		if (prevNode) {
			prevNode->next = currNode->next;
			delete currNode;
		}
		else {
			head = currNode->next;
			delete currNode;
		}
	}
	count--;
}
void LinkedList::Clear() {
	Node* nextNode = NULL;
	while (head != NULL)
	{
		nextNode = head->next;
		delete head;
		head = nextNode;
	}
}


