#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	printf("(A)\n");
	for (i = 0; i < 10; i += 1)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i > 0; i --)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0; i < 10; i += 1)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j <= i)
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 10; i > 0; i --)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j < i)
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	system("pause");
}