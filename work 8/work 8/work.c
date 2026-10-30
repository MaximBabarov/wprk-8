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
	printf("¬ведите количество символов: ");
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
	printf("¬ведите начальную точку: ");
	scanf(" %d", &n);
	printf("¬ведите конечную точку: ");
	scanf(" %d", &m);
	printf("¬ведите до какой степени возводить двойки: ");
	scanf(" %d", &n2);
	printf("\n");
	task1(n,m,n2);
	printf("\n");
	printf("задание 2\n");
	float x, tab;
	printf("введите x дл€ y = x^2 - cos^2(Pi*x) на интервале [1;3]: ");
	scanf(" %f", &x);
	printf("\n");
	if (x > 3 || x < 1)
	{
		printf("„исло вне интервала");
		return 0;
	}
	printf("¬ведите шаг табул€ции: ");
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
int task1(int n, int m, int n2)
{
	int s = 0;
	int k = 0;
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("выполнено %d раз", k++);
		printf("\n");
	}
	printf("результат %d", s);
	printf("\n");

	printf("%7s%7s", "2^x", "K=1024");
	printf("\n");
	for (int i = 0; i <= n2; i++)
	{
		printf("%7d%7.1fK\n", 1 << i, (double)(1 << i) / 1024.0);
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
	float s = 0.0;
	for (int count = 1; count <= N; count++)
	{
		if (count == N)
		{
			printf("%f", 1.0 + count * 0.1);
			s = s * 1.0 + count * 0.1;
		}
		else
		{
			printf("%f*", 1.0 + count * 0.1);
			s = s * 1.0 + count * 0.1;
		}
		
	}
	printf("= %f", s);
}
	