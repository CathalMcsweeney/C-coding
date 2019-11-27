#include <stdio.h>
#include <string.h>

double calcArea(double h, double w);
double calPaint(double area, double coats, double coverage);

void main()
{
	double wheight = 0.0, winheight = 0.0;
	double wwidth = 0.0, winwidth = 0.0;
	int end = 1, doors =0, coats =0.0;
	char fin = 0, win = 0;
	double area = 0.0, coverage = 0.0;

	for (int i = 0; i < end; i++)
	{
		printf("Enter Wall Height:");
		scanf_s("%lf", &wheight);
		printf("\nEnter Wall Width:");
		scanf_s("%lf", &wwidth);
		printf("\nmore walls ? (Y/N)\n");
		area = area + calcArea(wheight, wwidth);

		scanf_s(" %c", &fin);

		if (fin == 'y') {
			end++;
			printf("Total Wall area = %lf\n", area);
		}
		else {
			printf("Total Wall area = %lf\n", area);
			break;
		}
	}

	printf("\nhow many doors are in the room ? (double doors count as 2):");
	scanf_s("%d", &doors);
	area = area - (doors * 2);
	
	printf("total wall area minus doors is : %lf", area);
	end = 1;

	
		printf("\nAre there windows in the room ? (Y/N)");		
		scanf_s(" %c", &win);


		if (win == 'y') {
			for (int i = 0; i < end; i++)
			{
				printf("Enter Window Height:");
				scanf_s("%lf", &winheight);
				printf("\nEnter Window Width:");
				scanf_s("%lf", &winwidth);
				printf("\n more windows ? (Y/N)\n");
				scanf_s(" %c", &fin);

				area = area - calcArea(winheight, winwidth);

				if (fin == 'y') {
					end++;
					printf("Total Wall area minus windows= %lf\n", area);

				}
				else {
					printf("Total Wall area minus windows= %lf\n", area);
					break;
				}
			}
		}
		 
		else 
		{
			printf("Total Wall area = %lf\n", area);
		}
		
		printf("what is the coverage in m2 of the paint per litre ?");
		scanf_s("%lf", &coverage);
		printf("\nhow many coats would you like ?");
		scanf_s("%d", &coats);

		double answer = 0;
		answer = answer + calPaint(area, coats, coverage);
		printf("\n\nYou will require %lf litres of paint.", answer);
}


double calcArea(double h, double w) 
{
	double area = 0.0;
	area = h * w;
	return area;
}

double calPaint(double area, double coats, double coverage) 
{
	double ans = 0.0;
	ans = (area * coats) / coverage;
	return ans;
}