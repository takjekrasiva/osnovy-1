##pragma warning(disable : 4996)
#include <stdio.h>

#define YES 1
#define NO 0
#define MAX 100 // максимальный размер массива

int main(void)
{
	int MAS[MAX][MAX]; // обьявляем двумерный массив
	int N; // количество строк
	int K; // количество столбцов
	int str; // позиция числа по строке
	int stlb; // позиция числа по столбцу
	int obrstlb; // позиция по столбцу с конца
	int flag; // искомый признак

	/*ввод N и K с клавиатуры*/
	printf("N = ");
	scanf("%d", &N);
	printf("K = ");
	scanf("%d", &K);

	/*вводим каждый элемент массива*/
	for (str = 0; str < N; str++)
	{
		for (stlb = 0; stlb < K; stlb++)
		{
			printf("Element number %d %d: ", str + 1, stlb + 1);
			scanf("%d", &MAS[str][stlb]);
		}
	}
	printf("\n");

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
		for (stlb = 0, obrstlb = K-1; stlb < obrstlb; stlb++, obrstlb--)
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
