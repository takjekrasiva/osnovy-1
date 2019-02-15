#include <stdio.h>
#define LOWER -100
#define UPPER 100
#define STEP 20
int main(void)
{
	int fahr, cels;
	fahr = LOWER;
	while (fahr <= UPPER)
	{
		cels = (int) 5.0/9.0*(fahr - 32);
		printf("%3d %4d \n", fahr, cels);
		fahr = fahr + STEP;
	}
	return 1;
}