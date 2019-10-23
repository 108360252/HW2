#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if ((i == 1) && (j >= 1) && (j <= 10))
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
	return 0;
}