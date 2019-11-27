#include <iostream>

int main()
{
	int cntr = 0;
	int x = 0;
	float num[10];
	float avg = 0;
	float lgst = 0;
	float smal = 0;
	/*
	while (cntr < 10) 
	{
		printf("Enter number %d: \n", (cntr+1));
		scanf_s("%.2f", &num[cntr]);
		x = x + 1;
		cntr++
	} */

	printf("will this print %d", x);

	while (cntr < 10)
	{
		avg = avg + num[cntr];
		
		if (num[cntr] > lgst)
		{
			lgst = num[cntr];
		}

		else if (num[cntr] < smal && num[cntr] > 0.0)
		{
			smal = num[cntr];
		}
		cntr++
	}

	printf("the max number entered is : %.2f \n", lgst);
	printf("the min number entered is : %.2f \n", smal);
	avg = avg / x;
	printf("the average of the numbers entered is : %.2f", avg);
}
