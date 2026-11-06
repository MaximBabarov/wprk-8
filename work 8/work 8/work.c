#define _CRT_SECURE_NO_WARNINGS

#define _USE_MATH_DEFINES 

#include <locale.h>

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int task0(int num, char ch1, char ch2);
int task1(int n, int m, int n2);
int task2(float tab, float x);
int task3(int N);

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	char ch1, ch2;
	printf("задание 0\n");
	printf("Введите количество символов: ");
	scanf(" %d", &num);
	printf("\n");
	printf("введите какой символ хотите вывести на первой половине строки: ");
	scanf(" %c", &ch1);
	printf("\n");
	printf("введите какой символ хотите вывести на второй половине строки: ");
	scanf(" %c", &ch2);
	printf("\n");
	task0(num,ch1,ch2);
	int n, m, n2;
	printf("задание 1\n");
	printf("Введите начальную точку: ");
	scanf(" %d", &n);
	printf("Введите конечную точку: ");
	scanf(" %d", &m);
	printf("Введите до какой степени возводить двойки: ");
	scanf(" %d", &n2);
	printf("\n");
	task1(n,m,n2);
	printf("\n");
	printf("задание 2\n");
	float x, tab;
	printf("введите x для y = x^2 - cos^2(Pi*x) на интервале [1;3]: ");
	scanf(" %f", &x);
	printf("\n");
	if (x > 3 || x < 1)
	{
		printf("Число вне интервала");
		return 0;
	}
	printf("Введите шаг табуляции: ");
	scanf(" %f", &tab);
	printf("\n");
	task2(tab, x);
	printf("\n");
	printf("задание 3\n");
	int N;
	printf("введите N: ");
	scanf(" %d", &N);
	printf("\n");
	task3(N);
	return 0;
}

int task0(int num, char ch1, char ch2)
{
	printf("+");
	for (int start = 1; start <= num; start++)
	{
		if (start <= num/2)
		{
			printf("%c", ch1);
			printf("!");
		}
		else
		{
			printf("%c", ch2);
			printf("!");
		}
	}
	printf("+");
}
int task1(int n, int m, int n2) {
	int s = 0;
	int k = 0;
	for (int i = m; i >= n; i--) {
		s += i;
		printf("выполнено %d раз\n", k++);
	}
	printf("\nсумма = %d\n", s);
	printf("\nЗадание 1А\n");
	printf("%7s%7s\n", "2^x", "K=1024");
	for (int i = 0; i <= n2; i++) {
		int val = 1 << i;
		if (val > m) {
			printf("Достигнуто ограничение по значению m (%d)\n", m);
			break;
		}
		printf("%7d%7.1f\n", val, (double)val / 1024.0);
	}

	return 0;
}
int task2(float tab, float x)
{
	printf("_____________________________\n");
	for (x; x <= 3.0; x = x + tab)
	{
		printf("|%13f|%13f|\n", x, pow(x,2) - pow(cos(M_PI * x),2));
	}
	printf("_____________________________\n");
	return 0;
}
int task3(int N)
{
	float s = 1.0f;
	for (int count = 1; count <= N; count++) {
		if (count == N) {
			printf("1.%d", count);
		}
		else {
			printf("1.%d * ", count);
		}
		s *= (1.0f + count * 0.1f);
	}
	printf(" =%f", s);

	return 0;
}
	