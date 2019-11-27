#include <iostream>

int main()
{
	char tda[3][21];

	strcpy_s(tda[0], "VgNmqS1OcAovDzvJfuw5");
	strcpy_s(tda[1], "1PZupTC2QEFu9BLyIg8p");
	strcpy_s(tda[2], "OhKcLQVxUDjIZ7kpbAyT");

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		int upper = 0;
		int lower = 0;

		printf("\n String [%d]: %s\n", i, tda[i]);


		for (int x = 0; x <= 20; x++)
		{
			if (tda[i][x] >= '0' && tda[i][x] <= '9')
			{
				tda[i][x] = '*';
				num++;
			}
			else if (tda[i][x] >= 'A' && tda[i][x] <= 'Z')
			{
				tda[i][x] = tda[i][x] + 32;
				upper++;
			}
			else if (tda[i][x] >= 'a' && tda[i][x] <= 'z')
			{
				tda[i][x] = tda[i][x] - 32;
				lower++;
			}
		}
		printf("The new String is: %s\n %d digits converted to *'s.\n %d letters converted to lower.\n %d letter converted to caps.\n\n", tda[i], num, upper, lower);
	}

}

