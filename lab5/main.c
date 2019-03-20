#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
#define N 10
int main(void)
{
	int x[N]; // массив из N элементов вводится с клавиатуры
	int y[N]; // массив в который перезаписывается массив x
	int i;
	int a = 9;
	printf("Please, enter 10 integer numbers\nWARNING: they will be rearranged in reverse order\n");
	for (i = 0; i < N; i++) // ввод массива
	{
		scanf("%d", &x[i]);
	}
	for (i = 0; i < N; i++) // переписываем массив x в массив y
	{
		y[i] = x[i];
	}
	for (i = 0; i < N; i++) // переставляем числа в зеркальном порядке
	{
		x[i] = y[a];
		a = a - 1;
	}
	printf("Result:\n");
	for (i = 0; i < N; i++) // вывод массива
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	return 0;
}
