#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int paycode;
	float WeeklySalary;
	float pay;
	int HourlySalary;
	int TotalHours;
	float GrossWeeklySales;
	int pieces;
	float PieceWage;

	printf("Enter paycode (-1 to end): ");
	scanf_s("%d", &paycode);

	switch (paycode)
	{
	case 1:
		printf("Manager selected.\n");
		printf("Enter weekly salary:");
		scanf_s("%f", &WeeklySalary);
		printf("The manager's pay is $%.2f", WeeklySalary);
		break;

	case 2:
		printf("Hourly worker selected.\n");
		printf("Enter the hourly salary:");
		scanf_s("%d", &HourlySalary);
		printf("Enter the total hours worked:");
		scanf_s("%d", &TotalHours);
		if (TotalHours <= 40)
		{
			pay = HourlySalary * TotalHours;
		}
		else
		{
			pay = (40.0 * HourlySalary) + (TotalHours - 40) * (HourlySalary * 1.5);
		}
		printf("Worker's pay is $%.2f\n", pay);
		break;

	case 3:
		printf("Commission worker selected.\n");
		printf("Enter gross weekly sales:");
		scanf_s("%f", &GrossWeeklySales);
		pay = (GrossWeeklySales *0.057) + 250;
		printf("Commission worker's pay is $%.2f\n", pay);
		break;
	case 4:
		printf("Pieceworker selected.\n");
		printf("Enter number of pieces:");
		scanf_s("%d", &pieces);

		printf("Enter wage per piece:");
		scanf_s("%f", &PieceWage);

		pay = pieces * PieceWage;
		printf("Pieceworker's pay is $%.2f\n", pay);
		break;
	default:
		printf("Wrong paycode.");
	}
	return 0;


}