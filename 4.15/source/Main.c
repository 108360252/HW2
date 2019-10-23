#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int year;
	float rate, deposit;
	printf("       |rate 10.0%%     10.5%%     11.0%%     11.5%%     12.0%%\n");
	for (year = 1; year <= 15; year += 1)
	{
		printf("year%2d    ", year);
		for (rate = 10.0; rate <= 12.0; rate += 0.5)
		{
			deposit = 5000 * pow(1 + rate / 100, year);
			printf("%8.2f  ", deposit);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}