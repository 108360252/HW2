#include <stdio.h>
#include <stdlib.h>
int main()
{
	int acc=0;
	float beginning, balance, charges, credit, limit;
	while (acc != -1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d",&acc);
		if (acc == -1)
		{
			return 0;
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &beginning);
		printf("Enter total chargers:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);

		balance = beginning + charges - credit;

		if (balance > limit)
		{
			printf("Account:\t%d\n", acc);
			printf("Credit Limit:\t%.2f\n", limit);
			printf("Balance:\t%.2f\n", balance);
			printf("Credit Limit Exceeded.\n");
		}
	}
	return 0;
}