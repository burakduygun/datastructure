#include "Queue.h"
#include "Stack.h"
#include <iostream>

void yigindanCikar(Stack* s);
void siraliEkle(Stack* s, int x);

int main() {
	/*Queue* Q1 = new Queue();
	Q1->create();

	Q1->enQueue(50);
	Q1->enQueue(60);
	Q1->enQueue(70);

	Node* temp;
	temp = Q1->front;

	for (int i = 0; i < 3; i++)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}

	std::cout << std::endl;
	Q1->deQueue();

	temp = Q1->front;

	for (int i = 0; i < 2; i++)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}*/

	Stack* S1 = new Stack();
	S1->create();

	//S1->push(3);
	//std::cout << S1->top() << std::endl;
	//S1->push(1);
	//std::cout << S1->top() << std::endl;
	//S1->push(7);
	//std::cout << S1->top() << std::endl;
	//S1->push(4);
	//std::cout << S1->top() << std::endl;
	//S1->push(8);
	//std::cout << S1->top() << std::endl;

	//std::cout << "current size " << S1->currSize << std::endl;
	//std::cout << S1->top() << std::endl;
	//S1->pop();
	//std::cout << S1->top() << std::endl;
	//S1->pop();
	//std::cout << S1->top() << std::endl;
	//std::cout << "current size " << S1->currSize << std::endl;
	//S1->pop();
	//std::cout << S1->top() << std::endl;
	//std::cout << "current size " << S1->currSize << std::endl;

	S1->push(3);
	S1->push(1);
	S1->push(7);
	S1->push(4);
	S1->push(8);

	S1->write();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-----yigincikar fonkisiyon cagrisi-----" << std::endl;
	yigindanCikar(S1);
	std::cout << std::endl;
	S1->write();
	std::cout << std::endl;
}

void yigindanCikar(Stack* s)
{
	if (s->currSize > 0)
	{
		int x = s->pop();

		yigindanCikar(s);

		siraliEkle(s, x);
	}
}

void siraliEkle(Stack* s, int x)
{
	if (s->currSize == 0 || x > (int)s->top())
	{
		s->push(x);
		return;
	}

	int temp = s->pop();
	siraliEkle(s, x);

	s->push(temp);
}
