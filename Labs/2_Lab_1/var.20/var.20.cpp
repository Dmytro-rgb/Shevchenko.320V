﻿#include <iostream>
#include <stdio.h>
#include <string.h>
#include "windows.h"
#include <time.h>
#include <stdlib.h>
#define S 4
using namespace std;

struct Tabl {
	string name;
	char type;
	short tem;
	unsigned sp;
	
} t[S]{};

void input() {
	for (int i = 0; i < S; i++) {
		cout << i+1 << "." << " Введите вещество, тип, температуру ,скорость: ";
		cin >> t[i].name >> t[i].type >> t[i].tem >> t[i].sp;
	}
}
//+
void f2() {
	srand(time(NULL));

	int arr[S]{};
	bool already;

	for (int i = 0; i < S; ) {

		already = false;
		int newrand = rand() % S;

		for (int j = 0; j < i; j++) {
			if (arr[j] == newrand) {
				already = true;
			}	
		}

		if (already==false) {
			arr[i] = newrand;
			i++;
		}

	}

	t[arr[0]] = { "Анилин" , 'Ч' , 20 , 1656 };
	t[arr[1]] = { "Ртуть" , 'Ч' , 20 , 1451 };
	t[arr[2]] = { "Кедровое" , 'М' , 29 , 1406 };
	t[arr[3]] = { "рррррр" , 'Ч' , 10 , 16 };
	

	//t[0] = { "Анилин" , 'Ч' , 20 , 1656 };
	//t[1] = { "Ртуть" , 'Ч' , 20 , 1451 };
	//t[2] = { "Кедровое" , 'М' , 29 , 1406 };
	//t[3] = { "рррррр" , 'Ч' , 10 , 16 };



}

void f3(){

}

void print() {
	printf("-----------------------------------------------\n");
	printf("|          Скорость звука в жидкостях         |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество  |  Тип  |Температура|  Скорость   |\n");
	printf("|           |       |  (град.С) |   (м/сек)   |\n");
	printf("|-----------|-------|-----------|-------------|\n");
	for (int i = 0; i < S; i++)
		printf("| %9s | %5c | %9hd | %11u |\n",
			t[i].name.c_str(), t[i].type, t[i].tem, t[i].sp);
	printf("|---------------------------------------------|\n");
	printf("| примечание:  ч - чистое вещество, м - масло |\n");
	printf("-----------------------------------------------\n");
}    
//+ печать

int main(void) {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;

	cout << "1 - ввод с экрана\n";
	cout << "2 - случайным образом\n";
	cin >> a;

	if (a == 1) {
		input();

		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> a;

		if (a == 3) {

		}

		else if (a == 4) {
			print();
		   
		}
	}

	else if (a == 2) {
		f2();
		cout << "Что бдуем делать дальше?\n";
		cout << "3 - сортировка  \n";
		cout << "4 - печать \n";
		cin >> a;

		if (a == 3) {

		}

		else if (a == 4) {
			print();
		}

		else cout << "wrong number\n";

	}

	else cout << "wrong number";

}