#include "veri.h"
#include <iostream>
#include <chrono>

void YontemSecimi(int searchOption);
BinarySortTree* tree;

int main()
{
	int searchOption = 0;

	std::cout << "Arama yapicaginiz agaci seciniz (1,2,3):" << std::endl;
	std::cin >> searchOption;
	std::cout << std::endl;

	tree = new BinarySortTree();

	if (searchOption == 1)
	{
		tree->installTree(&arr1[0]);
		YontemSecimi(searchOption);
	}
	else if (searchOption == 2)
	{
		tree->installTree(&arr2[0]);
		YontemSecimi(searchOption);
	}
	else if (searchOption == 3)
	{
		tree->installTree(&arr3[0]);
		YontemSecimi(searchOption);
	}
	tree->closeTree();
}

void YontemSecimi(int searchOption)
{
	int searchMethod = 0, _searchedValue = 0;
	bool isFounded;

	std::cout << "Agac " << searchOption << " icin arama yontemini seciniz (DFS : 1, BFS : 2) : " << std::endl;
	std::cin >> searchMethod;
	std::cout << std::endl;

	Node* _searchedNode = tree->root;

	if (searchMethod == 1)
	{
		std::cout << "Agac " << searchOption << " uzerinde DFS ile aramak istediginiz degeri giriniz : " << std::endl;
		std::cin >> _searchedValue;

		auto begin1 = std::chrono::high_resolution_clock::now();

		isFounded = DFS(_searchedNode, _searchedValue);

		if (isFounded == true)
		{
			auto end1 = std::chrono::high_resolution_clock::now();
			auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
			std::cout << "Sonuc => Veri Bulundu " << std::endl;
			std::cout << "Gecen Sure => " << elapsed1.count() << " nano-saniye" << std::endl;
		}
		if (isFounded == false)
		{
			std::cout << "Sonuc => Veri Bulunamadi " << std::endl;
		}
	}
	else if (searchMethod == 2)
	{
		std::cout << "Agac " << searchOption << " uzerinde BFS ile aramak istediginiz degeri giriniz : " << std::endl;
		std::cin >> _searchedValue;
		std::cout << std::endl;

		auto begin1 = std::chrono::high_resolution_clock::now();

		isFounded = DFS(_searchedNode, _searchedValue);

		if (isFounded == true)
		{
			auto end1 = std::chrono::high_resolution_clock::now();
			auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
			std::cout << "Sonuc => Veri Bulundu " << std::endl;
			std::cout << "Gecen Sure => " << elapsed1.count() << " nano-saniye" << std::endl;
		}
		if (isFounded == false)
		{
			std::cout << "Sonuc => Veri Bulunamadi " << std::endl;
		}
	}
}

