#include "Array.h"
#include <iostream>
using namespace std;

void Array::addArray()
{
	int num;
	for (int i = 0; i < s; i++)
	{
		cout << "¬ведите число " << i << ": ";
		cin >> num;
		arr[i] = num;
	}
}

void Array::showArray()
{
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Array::resizeArray(int new_size)
{
	int* arr = new int[new_size];
	for (int i = 0; i < s; i++)
	{
		arr[i] = this->arr[i];
	}
	s = new_size;
	this->arr = arr;
	delete[]arr;
}

void Array::sortArray()
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int Array::getMax()
{
	int arr_max = arr[0];
	for (int i = 0; i < s; i++)
	{
		if (arr_max < arr[i]) arr_max = arr[i];
	}
	return arr_max;
}

int Array::getMin()
{
	int arr_min = arr[0];
	for (int i = 0; i < s; i++)
	{
		if (arr_min > arr[i]) arr_min = arr[i];
	}
	return arr_min;
}