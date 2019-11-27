#include <iostream>

void main()
{
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	int s5 = 0;

	printf("Enter Maths result: ");
	scanf_s("%d", &s1);
	printf("Enter English result: ");
	scanf_s("%d", &s2);
	printf("Enter Irish result: ");
	scanf_s("%d", &s3);
	printf("Enter History result: ");
	scanf_s("%d", &s4);
	printf("Enter Ag Science result: ");
	scanf_s("%d", &s5);

	float Avg = (s1 + s2 + s3 + s4 + s5) / 5;

	printf("\nyour average mark is: %.2f \n", Avg);

	printf("you Passed the following Subjects: ");

	//identifying which subject has been failed
	if ( s1 >= 40 )
	{
		printf("Maths ");
	}

	if (s2 >= 40)
	{
		printf("English ");
	}

	if (s3 >= 40)
	{
		printf("Irish ");
	}

	if (s4 >= 40)
	{
		printf("History ");
	}

	if (s5 >= 40)
	{
		printf("Ag Science ");
	}

	//identifying which subject has been passed
	printf("\nyou failed the following Subjects: ");

	if (s1 < 40)
	{
		printf(" Maths");
	}

	if (s2 < 40)
	{
		printf(" English");
	}

	if (s3 < 40)
	{
		printf(" Irish");
	}

	if (s4 < 40)
	{
		printf(" History");
	}

	if (s5 < 40)
	{
		printf(" Ag Science");
	}
	
	///if else statement to identify which subject is the score
	if (s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5)
	{
		printf("\nyour highest mark is %.d in Maths", s1);
	}

	else if (s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5)
	{
		printf("\nyour highest mark is %.d in English", s2);
	}

	else if (s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5)
	{
		printf("\nyour highest mark is %.d in Irish", s3);
	}

	else if (s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5)
	{
		printf("\nyour highest mark is %.d in History", s4);
	}

	else if (s5 > s1 && s5 > s2 && s5 > s3 && s5 > s4)
	{
		printf("\nyour highest mark is %.d in Ag Science", s5);
	}

	else
	{
		printf("\nyour scored the same on two or more subjects");
	}
}