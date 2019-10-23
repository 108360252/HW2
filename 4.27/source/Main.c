#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int side1, side2 ,hypo;
	for (int hypo = 1; hypo <= 500; hypo++)
	{
		for (int side1 = 1; side1 <= 500; side1++)
			for (int side2 = 1; side2 <= 500; side2++)
			{
				if (side1 < side2 && side1 * side1 + side2 * side2 == hypo * hypo)
				{
					printf("(%d, %d, %d)\n", side1, side2, hypo);
				}
			}
	}
	return 0;
}