// Lab_04_1.cpp
// Журавленко Андрій
// Лабораторна робота № 4.1
// Розгалуження, задане графіком функції.
// Варіант 6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N;
	double P;
	
	cout << "N = "; cin >> N;
	
	P = 1;
	k = N;
	while (k <= 19)
	{
		P *= (k - N) / (k + N) + 1;
		k++;
	}
	cout << P << endl;
	P = 1;
	k = N;
	do {
		P *= (k - N) / (k + N) + 1;
		k++;
	} while (k <= 19);
	cout << P << endl;
	P = 1;
	for (k = N; k <= 19; k++)
	{
		P *= (k - N) / (k + N) + 1;
	}
	cout << P << endl;
	P = 1;
	for (k = 19; k >= N; k--)
	{
		P *= (k - N) / (k + N) + 1;
	}
	cout << P << endl;
	return 0;
}
