// Lab_04_6.cpp
// < Кузів Назар >
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int k, i;
	P = 1;
	k = 1;
//1) while(…) {… while(…) {…} …};
	while (k <= 15)
	{
		S = 0;
		i = 1;
		while (i <= k)
		{
			S += cos(i + k);
			i++;
		}
		P *= pow(1 + S, 2);
			k++;
	}
	cout << P << endl;
//2) do{… do{…} while(…) …} while(…);
	P = 1;
	k = 1;
	
	do {
		S = 0;
		i = 1;
		do {
			S += cos(i + k);
			i++;
		} while (i <= k);
		P *= pow(1 + S, 2);
		k++;
	} while (k <= 15);
	cout << P << endl;
//3) for(…; …; n++) {… for(…; …; k++) {…} …};
	P = 1;
	for (k = 1; k <= 15; k++)
	{
		S = 0;
		for (i = 1; i <= k; i++)
		{
			S += cos(i + k);
		}
		P *= pow(1 + S, 2);
	}
	cout << P << endl;
//4) for(…; …; n--) {… for(…; …; k--) {…} …}.
	P = 1;
	for (k = 15; k >= 1; k--)
	{
		S = 0;
		for (i = k; i >= 1; i--)
		{
			S += cos(i + k);
		}
		P *= pow(1 + S, 2);
	}
	cout << P << endl;

	return 0;
}