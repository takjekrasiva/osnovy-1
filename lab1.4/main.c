#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h> //необходимо для корректного вызова функций ввода/вывода
int main(void) //главная функция main не принимает данных от операционной системы, возвращает статус завершения
{ /*начало тела программы*/
	//описание переменных//
	float L; //расстояние
	float t1; //время по течению
	float t2; //время поротив течения
	float v1; //скорость катера по течению
	float v2; //скорость катера против течения
	float v; //искомая скорость течения реки
	/*ввод исходных данных*/
	printf("L = "); //вывод на экран подсказки: L=
	scanf("%f", &L); //ввод с клавиатуры значения переменной L
	printf("t1 = "); //вывод на экран подсказки: t1=
	scanf("%f", &t1); //ввод с клавиатуры значения переменной t1
	printf("t2 = "); //вывод на экран подсказки: t2=
	scanf("%f", &t2);//ввод с клавиатуры значения переменной t2
	/*вычисление задачи*/
	v1 = L / t1; //вычисление скорости катера по течению
	v2 = L / t2; //вычисление скорости катера против течения
	v = (v1 - v2) / 2; //вычисление искомой скорости реки
	/*вывод результатов*/
	printf("speed=%f\n", v); //вывод на экран значения переменной v
	return 0; //программа возвращается признак корректного завершения
} //конец тела программы
