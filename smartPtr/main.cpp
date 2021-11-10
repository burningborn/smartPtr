#include <iostream>
#include <vector>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	//использование умного указателя при работе с динамическим массивом
	int SIZE;
	cout << "Введите размер массива: \n SIZE = ";
	cin >> SIZE;
	cout << endl;
	shared_ptr<int[]> sPtr(new int[SIZE] {});
	for (size_t i = 0; i < SIZE; i++)
	{
		sPtr[i] = rand() % 100;
		cout << sPtr[i] << " ";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
			cout << endl;
}