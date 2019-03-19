#pragma warning(disable : 4996) //необходимо дл€ использовани€ устаревших функций (scanf)
#include <stdio.h>
// определение символических констант
#define YES 1
#define NO 0
#define MAXLINE 1000
void process_line(char buffer[]); // объ€вл€ем функцию
int main(void)
{
	char line[MAXLINE];
	printf("Please, enter some words\nWARNING: words which consist of more than N letters will be deleted\n");
	gets(line);
	process_line(line);
	printf("Result:\n");
	puts(line);
	return 0;
}
void process_line(char buffer[])
{
	char c; // текущий символ
	int word = NO; // признак слова
	int overkill = NO; // инд перебора букв в слове
	int symb = NO; // индикатор наличи€ лишних символов
	int ish = 0; // позици€ текущего символа исходной cтроки
	int res = 0; // позици€ текущего символа результирующей строки
	int start = 0; // позици€ начала слова
	int n = 0; // сщетчик букв в слове
	int j;
	int N; // наибольшее количество букв в строке
	printf("Enter N="); // вывод подсказки
	scanf("%d", &N); // ввод N с клавиатуры
	do
	{
		c = buffer[ish]; // вз€ть текущий символ из буфера
		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') // найден разделитель
		{
			if (symb == NO && word == YES && overkill == NO) // если слово без лиш-х символов, не превышет зн-е N, выполнить...
			{
				for (j = start; j < ish; j++) // слово не подлежит удалению оно копируетс€ в результирующую строку
				{
					buffer[res] = buffer[j]; // копирование слова
					res++;
				}
				buffer[res] = c;
				res++;
			}
			word = NO;
			symb = NO;
			overkill = NO;
			n = 0;
		}
		else
		{
			n++;
			if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')) // проверить нет ли в слове лишних символов
			{
				symb = YES; // в слове есть лишний символ
			}
			if (word == NO) // найдена перва€ буква слова
			{
				start = ish; // запомнить позицию начала слова
			}
			if (n > N) // проверка на перебор букв
			{
				overkill = YES; // перебор
			}
			word = YES;
		}
		ish++;
	}
	while (c != '\0'); // продолжать до конца строки
	buffer[res++] = '\0';// устанавливаем конец файла
}