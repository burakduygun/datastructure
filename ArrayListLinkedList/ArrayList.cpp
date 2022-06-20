#include "ArrayList.h"
#include <iostream>
#include <stdlib.h>

void ArrayList::Create() {
	head = NULL;
	count = 0;
}

void ArrayList::Write() {
	for (int i = 0; i < count; i++)
	{
		std::cout << *(head + i) << std::endl;
	}
}
void ArrayList::Add(int value, int index) {
	if (count == 0)
	{
		int* newArr = new int[count];
		head = newArr;
		*(head + count++) = value;
	}
	else
	{
		count++;
		int* newArr = new int[count];
		for (int i = 0, j = 0; i < count; i++, j++)
		{
			if (j == index)
			{
				*(newArr + j) = value;
				i--;
			}
			else
			{
				*(newArr + j) = *(head + i);
			}
		}
		head = newArr;
	}
}

void ArrayList::Update(int value, int index) {
	*(head + index) = value;
}

void ArrayList::Remove(int index) {

	if (index < 0 || index > count - 1)
	{
		std::cout << "invalid index" << std::endl << std::endl;
	}

	else
	{
		for (int i = index; i < count - 1; i++)
		{
			*(head + i) = *(head + (i + 1));
		}
		count--;
	}
}

void ArrayList::Clear()
{
	delete[]head;
}