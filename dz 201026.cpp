#include<iostream>
#include<Windows.h>
void RaspDinMass(int*& arr, int size)
{

	arr = new int[size];

}
void InicDinMass(int*& arr, int size)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = 1 + i;
	}

}
void PrintMass(int* arr, int size)
{
	for (int i = 0;i < size;i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
void Del1Mass(int*& arr)
{
	delete[] arr;
}
void DopElement(int*& arr, int& size, int nov) // int*& - работа напрямую
{
	size += 1;
	int* temp = new int[size + 1];
	for (int i = 0;i < size;i++)
	{
		temp[i] = arr[i];
	}
	std::swap(arr, temp);
	arr[size - 1] = nov;
	delete[] temp;
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // 1251
	srand(time(NULL));
	int* ptr = nullptr;
	int size = 5;
	RaspDinMass(ptr, size);
	InicDinMass(ptr, size);
	PrintMass(ptr, size);
	std::cout << "  " << std::endl;
	DopElement(ptr, size, 15);
	PrintMass(ptr, size);
	Del1Mass(ptr);
	return 0;
}