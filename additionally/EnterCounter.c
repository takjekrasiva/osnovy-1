#include<stdio.h> 
int main(void)
{
	long int counter; // счетчик
	int c; // текущий символ из потока
	counter = 0; // начальное присваивание значения счетчика
	while ((c = getchar()) != EOF) // цикл чтения символов из потока, связанного с клавиатурой
	{
		if (c == '\n') // проверка нажатия ENTER
		{
			counter++; // прибавление 1 к счетчику
		}
	}
	printf("number is %d\n", counter); // вывод счетчика
	return 0;
}
