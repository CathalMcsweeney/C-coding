#include <iostream>

int main()
{
	int counter = 1;
	double x = 0.0;
	double num[11];
	double avg = 0.0;
	double lgst = 0.0;
	double smal = 0.0;

	printf("program to calculate average, min, max of up to 10 floating point numbers\n");
	printf("enter up to 10 numbers <Enter 0.0 to end inputs>\n");

	while (counter <= 10)
	{
		x = x + 1;

		printf("#%.lf: ", x);
		scanf_s("%lf", &num[counter]);

		if (num[counter] == 0.0) {
			break;
		}
		counter++;
	}

	smal = num[1];

	for (counter = 1;counter <= x;counter++)
	{
		avg = avg + num[counter];
		

		if (num[counter] > lgst)
		{
			lgst = num[counter];
		}

		if (num[counter] < smal && num[counter] > 0.0)
		{
			smal = num[counter];
		}
		else {
			continue;
		}
	}
	if (num[1] == 0.0) {
		printf("\nNo numbers entered -- QUITTING\n\nBYE FELICIA!!\n\n");
	}

	else if (num[2] == 0.0) {
		printf("\nOnly one number entered. \n\nYou entered : %.2lf \n", num[1]);
	}
	else {
		printf("the max number entered is : %.2lf \n", lgst);

		printf("the min number entered is : %.2lf \n", smal);

		if (x <= 9) {
			avg = avg / (x - 1);
		}
		else if (x = 10 && num[10] == 0.0) {
			avg = avg / 9;
		}
		else
		{
			avg = avg / 10;
		}

		printf("the average of the numbers entered is : %.2lf", avg);
	}
}

