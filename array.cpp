#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {

	const int N = 5;					//				
	const int M = 5;					// создание массива
	int A[M][N];						//

	for (int i = 0; i < M; i++)			//
	{									//
		for (int j = 0; j < N; j++)		//
		{								// вывод массива
			A[i][j] = i + j;			//
			cout << A[i][j] << ' ';		//
		}								//
		cout << endl;					// 
	}
	cout << endl;

	int sum = 0;						// сумма для вывода ответа.

	
	time_t now = time(0);				// узнаем время
	tm* ltm = localtime(&now);			//

	int day = ltm->tm_mday;				// день месяца

	/*
	int day;							//
	cin >> day;							// день месяца вводимый в ручную
	*/

	for (int x = 0; x < N; x++)			//
	{									// посчет суммы элементов в строке массива\n
		sum += A[day % N][x];			// индекс которого равен остатку деления текушего числа календаря на N
	}
	cout << sum << endl;				// ответ!

	return 0;
}
