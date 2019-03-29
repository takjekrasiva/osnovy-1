#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
#define N 10
int main(void)
{
	int x[N]; // массив из N элементов вводится с клавиатуры
	int y[N]; // массив в который перезаписывается массив x
	int i; // позиция символа в исходной строке
	int a; // позиция символа в результирующей строке
	printf("Please, enter 10 integer numbers\nWARNING: they will be rearranged in reverse order\n");
	for (i = 0; i < N; i++) // ввод массива x и копирование его в y
	{
		scanf("%d", &x[i]);
		y[i] = x[i];
	}
	printf("Result:\n");
	for (i = 0, a=9; i < N; i++, a--) // переставляем числа в зеркальном порядке и выводим
	{
		x[i] = y[a];
		printf("%d ", x[i]);
	}
	return 0;
}
