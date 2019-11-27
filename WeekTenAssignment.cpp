#include <stdio.h>
#include <string.h>
#include "time.h"
#include "stdlib.h"
#include "conio.h"
#include <windows.h>

// function to wait 't' seconds
void wait(long t);
// function to use the Beep function in Windows
void BeepSound(int num);
// function to play a tune when you spin 3 of a kind
void WinnerSound();

void main()
{
	int nums[4];
	char c;
	int nh, ns, nd, nc;

	// call this function if there are 3 of any suit out of the 4 drawn
	WinnerSound();

	// use this function to wait a second between each character appearing
	wait(1);

	// use _getch (or getch depending on your compiler) to get a character from the std input without echoing to screen
	printf("Welcome to a kinda fruit machine - press space bar to spin\n");
	c = _getch();

	// if not a space then leave
	if (c != ' ')
	{
		puts("I said SPACE BAR!!!");
		exit;
	}

	// main body of the program
	// reset counters for the suit characters
	while (c == ' ')
	{
		nh = 0;
		ns = 0;
		nd = 0;
		nc = 0;

		// generate 4 random numbers between 3 and 6
		for (int i = 0; i < 4; i++)
		{
			// CODE HERE
			nums[i] = rand() % 4 + 3;
			// increment counters 
			// CODE HERE

			if (nums[i] == 3) 
			{
				nh++;
			}
			if (nums[i] == 4) 
			{
				ns++;
			}
			if (nums[i] == 5) 
			{
				nd++;
			}
			if (nums[i] == 6) 
			{
				nc++;
			}

			// output the sound for the character
			// CODE HERE
			BeepSound(nums[i]);
			// output the character
			// CODE HERE
			printf("%d ", nums[i]);
			// wait a second before generating next character
			// CODE HERE
			wait(1);
		}

		// if there are 3 of any suit in the 4 characters, then it's a winner
		if (nh>=3||ns>=3||nd>=3||nc>=3)
		{
			printf("Congratulations - you're a winner!!\n");
			WinnerSound();
			// wait 2 seconds before continuing
			wait(2);
		}
		printf("\n");
		c = _getch();
	}
}

// function to play a different sound for each of the 4 characters
void BeepSound(int num)
{
	double note = 240;
	int duration = 300;

	Beep(note * num, duration);
}

// function to play winning sound - needs work!
void WinnerSound()
{
	Beep(1993.45, 500);
	Beep(757.34, 400);
}

// function to wait for 't' seconds
void wait(long t)
{
	long diff = 0;
	long now = time(NULL);

	long then = time(NULL);
	while (diff < t)
	{
		then = time(NULL);
		diff = then - now;
	}
}

