#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales = 0;
	float commission;
	while (sales != -1)
	{
		printf("Enter sales in dollars ( -1 to end ): ");
		scanf_s("%f", &sales);
		if (sales == -1)
		{
			return 0;
		}
		commission = sales*0.09 +200;
		printf("Salary is %.2f\n", commission);
	}
	return 0;
}