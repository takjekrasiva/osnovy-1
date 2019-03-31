#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
#define N 10
int main(void)
{
	int orig[N]; // массив из N элементов вводится с клавиатуры
	int copy[N]; // массив в который перезаписывается массив x
	int i; // позиция символа в исходной строке
	int a; // позиция символа в результирующей строке
	printf("Please, enter 10 integer numbers\nWARNING: they will be rearranged in reverse order\n");
	for (i = 0; i < N; i++) // ввод массива x и копирование его в y
	{
		scanf("%d", &orig[i]);
		copy[i] = orig[i];
	}
	printf("Result:\n");
	for (i = 0, a = 9; i < N; i++, a--) // переставляем числа в зеркальном порядке и выводим
	{
		orig[i] = copy[a];
		printf("%d ", orig[i]);
	}
	return 0;
}
