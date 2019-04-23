#pragma warning(disable : 4996)
#include <stdio.h>

#define YES 1
#define NO 0
#define N 10
#define K 10

int main(void)
{
	int MAS[N][K]; // обьявляем двумерный массив
	int str; // позиция числа по строке
	int stlb; // позиция числа по столбцу
	int obrstlb; // позиция по столбцу с конца
	int flag; // искомый признак

	srand(time(NULL));

	/*вводим каждый элемент массива*/
	for (str = 0; str < N; str++)
	{
		for (stlb = 0; stlb < K; stlb++)
		{
			MAS[str][stlb] = 0 + rand() % 10;
		}
	}

	str = 0 + rand() % 10;

	for (stlb = 0, obrstlb = K - 1; stlb < obrstlb; stlb++, obrstlb--)
	{
		MAS[str][obrstlb] = MAS[str][stlb];
	}

	/*вывод исходного массива для подсказки*/
	printf("original mass\n");
	for (str = 0; str < N; str++)
	{
		for (stlb = 0; stlb < K; stlb++)
		{
			printf("%4d ", MAS[str][stlb]);
		}
		printf("\n");
	}
	printf("\n");

	/*ищем зеркальные строки*/
	printf("processed mass\n");
	for (str = 0; str < N; str++)
	{
		flag = YES;
		for (stlb = 0, obrstlb = K - 1; stlb < obrstlb; stlb++, obrstlb--)
		{
			if (MAS[str][stlb] != MAS[str][obrstlb])
			{
				flag = NO; // помечаем не зеркальные строки
			}
		}
		if (flag == YES) // зеркальные строки аннулируем и выводим
		{
			for (stlb = 0; stlb < K; stlb++)
			{
				MAS[str][stlb] = 0;
				printf("%4d ", MAS[str][stlb]);
			}
			printf("\n");
		}
		else
		{
			for (stlb = 0; stlb < K; stlb++) // не зеркальные строки просто выводим
			{
				printf("%4d ", MAS[str][stlb]);
			}
			printf("\n");
		}
	}
	return 0;
}
