#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define PI 3.14159

double conversion(double degrees);

void main()
{
	char trigFunc[5];
	double degrees = 0.0;
	double radians = 0.0;
	double ans = 0.0;
	int x = 1;
	char fin = 0;

	for (int i = 0;i < x;i++) {

		printf("Please enter trigometric function to be used in calculation <SIN 90, COS 90 or TAN 90>\n");
		scanf("%s %lf", trigFunc, &degrees);

		for (int i = 0; i < 4;i++) {
			trigFunc[i] = toupper(trigFunc[i]);
		}

		printf("%s %lf =", trigFunc, degrees);
		radians = conversion(degrees);

		if (!strcmp("SIN", trigFunc)) {
			ans = sin(radians);
			printf("%.3lf\n", ans);
		}
		else if (!strcmp("COS", trigFunc)) {
			ans = cos(radians);
			printf("%.3lf\n", ans);
		}
		else if (!strcmp("TAN", trigFunc)) {
			ans = tan(radians);
			printf("%.3lf\n", ans);
		}

		printf("Do you wish to carry out another calculation ? <y/n>\n");
		scanf(" %c", &fin);
		fin = toupper(fin);

		if (fin == 'Y') {
			x++;
		}
		else {
			printf("\nGoodbye\n\n");
			break;
		}
	}
}

double conversion(double degrees)
{
	double radians = degrees * PI / 180;
	return radians;
}