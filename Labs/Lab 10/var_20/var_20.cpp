﻿#include <iostream>
#include <ctime>
#include <stdio.h>
#include <windows.h>

using namespace std;
double avarage (int *Arr, int rows, int cols) {
	int arr[20][20]{};
	int temp = 0; //номер елемента одномер массива
	double AvarageValue = 0;
	int max[20]{}; //массив макс чисел

	cout << "Двумерный массив: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = Arr[temp];
			cout << arr[i][j] << " ";
			temp++;
		}
		cout << endl;
	}
	cout << endl;

	cout << "Максимальные елементы: " << endl;
	for (int i = 0; i < rows; i++)
	{
		int Max = arr[i][0]; //максимальное число
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > Max)
			{
				Max = arr[i][j];
			}
		}
		max[i] = Max;
		cout << max[i] << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Среднее значение макс. елементов: ";
	for (int i = 0; i < rows; i++)
	{
		AvarageValue += max[i];
	}
	AvarageValue = AvarageValue / rows;

	return AvarageValue;
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int N, M;
	cout << "Введите количество строк и столбцов массива " ;
	cin >> N >> M;
	
	int size = N * M;
	int* Arr = new int[size];

	cout << "Одномерный массив: " << endl;
	for (int i = 0; i < size; i++) {

		Arr[i] = rand() & 10;
		cout << Arr[i] << " ";
	}
	cout << endl;
	cout << endl;
	cout << avarage(Arr, N, M);
	cout << endl;

	cout << "Одномерный массив: " << endl;
	for (int i = 0; i < size; i++) {

		cout << Arr[i] << " ";
	}

	return 0;
}

