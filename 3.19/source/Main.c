#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float principal = 0;
	float rate, days, interest;
	while (principal != -1)
	{
		printf("Enter loam principal ( -1 to end ): ");
		scanf_s("%f", &principal);
		if (principal == -1)
		{
			return 0;
		}
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &days);

		interest = principal * rate * days /365;
		printf("The interest charge is $%.2f\n", interest);
	}
	return 0;
}