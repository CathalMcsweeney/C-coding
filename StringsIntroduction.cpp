#include <iostream>

void main()
{
	char s1[] = "VgNmqS1OcAovDzvJfuw5";
	char s2[] = "1PZupTC2QEFu9BLyIg8p";
	char s3[] = "OhKcLQVxUDjIZ7kpbAyT";

	int num = 0;
	int upper = 0;
	int lower = 0;

	printf("original string is: %s\n", s1);

	for (int i = 0; i <= 20; i++) 
	{
		if (s1[i] >= '0' && s1[i] <= '9') 
			{
				s1[i] = '*';
				num++;
			}
		else if (s1[i] >= 'A' && s1[i] <= 'Z')
			{
				s1[i] = s1[i] + 32;
				upper++;
			}
		else if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] = s1[i] - 32;
			lower++;
		}
	}
	printf("The new String is: %s\n %d digits converted to *'s.\n %d letters converted to lower.\n %d letter converted to caps.\n\n", s1, num, upper, lower);

	num = 0;
	upper = 0;
	lower = 0;

	printf("original string is: %s\n", s2);

	for (int i = 0; i <= 20; i++)
	{
		if (s2[i] >= '0' && s2[i] <= '9')
		{
			s2[i] = '*';
			num++;
		}
		else if (s2[i] >= 'A' && s2[i] <= 'Z')
		{
			s2[i] = s2[i] + 32;
			upper++;
		}
		else if (s2[i] >= 'a' && s2[i] <= 'z')
		{
			s2[i] = s2[i] - 32;
			lower++;
		}
	}
	printf("The new String is: %s\n %d digits converted to *'s.\n %d letters converted to lower.\n %d letter converted to caps.\n\n", s2, num, upper, lower);

	num = 0;
	upper = 0;
	lower = 0;

	printf("original string is: %s\n", s3);

	for (int i = 0; i <= 20; i++)
	{
		if (s3[i] >= '0' && s3[i] <= '9')
		{
			s3[i] = '*';
			num++;
		}
		else if (s3[i] >= 'A' && s3[i] <= 'Z')
		{
			s3[i] = s3[i] + 32;
			upper++;
		}
		else if (s3[i] >= 'a' && s3[i] <= 'z')
		{
			s3[i] = s3[i] - 32;
			lower++;
		}
	}
	printf("The new String is: %s\n %d digits converted to *'s.\n %d letters converted to lower.\n %d letter converted to caps.\n\n", s3, num, upper, lower);
}


