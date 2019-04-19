#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
// определение символических констант
#define YES 1
#define NO 0
#define MAXLINE 10
#define Z 1 // 
void process_line(char buffer[]); // объявляем функцию

int main(void)
{
	char line[MAXLINE];
	printf("Please, enter some words\n");
	gets(line);
	process_line(line);
	printf("Result:\n");
	puts(line);
	return 0;
}

void process_line(char buffer[])
{
	int c; // текущий символ
	int ish = 0; // позиция текущего символа исходной cтроки
	int res = 0; // позиция текущего символа результирующей строки

	do
	{
		c = buffer[ish]; // взять текущий символ из буфера
			if (c + Z <= 172) // 
			{
				c = c + Z;
				buffer[res++] = c;
			}
			else
			{
				c = 97 + Z;
				buffer[res++] = c; // 
			}
		ish++;
	}
	while (c != '\0'); // продолжать до конца строки
	buffer[res] = '\0';// устанавливаем конец файла
}
