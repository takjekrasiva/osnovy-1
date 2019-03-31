#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
#define N 10
int main(void)
{
	int orig[N]; // массив из N элементов вводится с клавиатуры
	int copy[N]; // массив в который перезаписывается массив x
	int ish; // позиция символа в исходной строке
	int res; // позиция символа в результирующей строке
	printf("Please, enter 10 integer numbers\nWARNING: they will be rearranged in reverse order\n");
	for (ish = 0; ish < N; ish++) // ввод массива x и копирование его в y
	{
		scanf("%d", &orig[ish]);
		copy[ish] = orig[ish];
	}
	printf("Result:\n");
	for (ish = 0, res = 9; ish < N; ish++, res--) // переставляем числа в зеркальном порядке и выводим
	{
		orig[ish] = copy[res];
		printf("%d ", orig[ish]);
	}
	return 0;
}
