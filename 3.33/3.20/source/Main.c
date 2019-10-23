#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int hours = 0;
	float rate, salary;
	while (hours != -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
		{
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);

		salary = hours * rate;
		if (hours > 40)
		{
			salary = hours * rate + ((hours - 40) * 5);
		}
		printf("Salary is $%.2f\n", salary);
	}
	return 0;
}