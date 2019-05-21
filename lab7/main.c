#pragma warning(disable : 4996) 
#include <stdio.h> 
int main(void)
{
	unsigned long num = 0, N, mask = 15; // отзеркаленное число, длнное целое число, маска
	scanf("%x", &N); // ввод числа
	while (N != 0) // до того как число обнулится
	{
		num ^= (N & mask); // сложение по модулю 2
		N = N >> 4; // сдвиг вправо части числа
		num = num << 4; // сдвиг этой штуки влево, чтобы начать заново проверять
	}
	num = num >> 4; // 
	printf("%x", num); // вывод нового числа
	return 0;
}
