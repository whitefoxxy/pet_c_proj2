#include "new.h"

#include <stdio.h>
#include <windows.h>

double f1(double x)
{
	return x;
};

double f2(double x)
{
	return (3 * x);
};

double f3(double x)
{
	return (1 / x);
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double (*f_1) (double) = f3;
	int n;
	double *chis;

	scanf_s("%d", &n);

	chis = add(n, f_1);
	for (int i = 0; i < 2; i += 2)
	{ 
		printf("Значение функции f%d: %lf\nЗначение аргумента функции f%d: %lf\n", (i/2) + 1, *(chis + i), (i / 2) + 1, *(chis + i + 1));
	}
	return 0;
}