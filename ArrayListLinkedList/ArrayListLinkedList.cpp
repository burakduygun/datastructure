#include "ArrayList.h"
#include "LinkedList.h"
#include <iostream>
#include <chrono>

int main()
{
	std::cout << "10000 elemanli bir liste de sondaki elemani guncelleme" << std::endl << std::endl;

	ArrayList* A1 = new ArrayList();
	A1->Create();

	for (int i = 0; i < 10000; i++)
	{
		A1->Add(i, i);
	}

	auto begin1 = std::chrono::high_resolution_clock::now();

	A1->Update(9999, 9999);

	auto end1 = std::chrono::high_resolution_clock::now();
	auto elapsed1 = std::chrono::duration_cast<std::chrono::microseconds>(end1 - begin1);
	std::cout << "Dizi ile gercekleme de array de eleman guncelleme suresi=> " << elapsed1.count() << " mikrosaniye" << std::endl << std::endl;

	LinkedList* L1 = new LinkedList();
	L1->Create();

	for (int i = 0; i < 10000; i++)
	{
		L1->Add(i, i);
	}

	auto begin2 = std::chrono::high_resolution_clock::now();

	L1->Update(9999, 9999);

	auto end2 = std::chrono::high_resolution_clock::now();
	auto elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - begin2);
	std::cout << "Baglantili Liste ile gercekleme de eleman guncelleme suresi=> " << elapsed2.count() << " mikrosaniye" << std::endl << std::endl;

	/*LinkedList* L1 = new LinkedList();
	L1->Create();

	for (int i = 0; i < 10; i++)
	{
		L1->Add(i, i);
	}

	L1->Write();

	std::cout << std::endl;
	std::cout << std::endl;

	L1->Add(5,55);
	L1->Write();

	std::cout << std::endl;
	std::cout << std::endl;

	L1->Add(11, 2000);
	L1->Write();

	std::cout << std::endl;
	std::cout << std::endl;

	L1->Add(0, 5555);
	L1->Write();

	std::cout << std::endl;
	std::cout << std::endl;

	L1->Update(11, 999999);
	L1->Write();

	std::cout << std::endl;
	std::cout << std::endl;

	L1->Remove(12);
	L1->Write();

	std::cout << std::endl;
	std::cout << std::endl;

	L1->Clear();*/
}

