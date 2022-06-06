#pragma once
#include <iostream>

using namespace std;
class Array
{
	
	int* arr;
	size_t s;

	void createArray(int s) { arr = new int[s]; }

public:
	Array(size_t s) : s{ s }
	{
		createArray(s);
	}
	Array() :arr{ nullptr }, s{ 0 }{}

	// ������ ������ �������, ������� ������ ������������� �� ���������
	void setSize(int s)
	{
		if (this->s == 0)
		{
			this->s = s;
			createArray(s);
		}
		else cout << "������ ������� ��� ����� " << endl;
	}

	// ���������� �������� � ������
	void addArray();
	//����������� ������� �� �����
	void showArray();
	//��������� ������� (��������� ����� ������� ������)
	void resizeArray(int s);
	//���������� ������� (����������� �������)
	void sortArray();
	//������������ �������
	int getMax();
	//����������� �������
	int getMin();

	//����������
	~Array()
	{
		if (arr != nullptr)
		{
			delete[]arr;
		}
	}
};
