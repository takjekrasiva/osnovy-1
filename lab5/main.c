#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
#define N 10
int main(void)
{
	int ORIG[N]; // массив из N элементов вводится с клавиатуры
	int COPY[N]; // массив в который перезаписывается массив x
	int ish; // позиция символа в исходной строке
	int res; // позиция символа в результирующей строке
	printf("Please, enter 10 integer numbers\nWARNING: they will be rearranged in reverse order\n");
	for (ish = 0; ish < N; ish++) // ввод массива x и копирование его в y
	{
		scanf("%d", &ORIG[ish]);
		COPY[ish] = ORIG[ish];
	}
	printf("Result:\n");
	for (ish = 0, res = 9; ish < N; ish++, res--) // переставляем числа в зеркальном порядке и выводим
	{
		ORIG[ish] = COPY[res];
		printf("%d ", ORIG[ish]);
	}
	return 0;
}
