#pragma once
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <stdio.h>
#include <iostream>


struct ArrayList {
	void Create();
	void Add(int value, int index);
	void Update(int value, int index);
	void Remove(int index);

	void Write();
	void Clear();

	int* head;
	int count;
};
#endif 

