#include <iostream>
#include "stdio.h"


void main()
{
	int hours = 0;
	float rate = 15.00;
	float pay = 0.0;
	float otrate = 25.00;


	printf("Enter hours worked:  ");
	scanf_s("%d", &hours);


	if (hours <= 40)
	{
		pay = hours * rate;

	}

	else
	{
		pay = 40 * rate;
		pay = pay + (hours - 40) * otrate;
	}

	printf("you worked %d hours and earned %.2f \n", hours, pay);

}
