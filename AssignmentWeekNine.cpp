#include <stdio.h>

int getLength(char string[]); 
int isAlphabetical(char c); 
int isVowel(char c); 
int countVowels(char string[]); 
int countConsonants(char string[]); 

int main()
{
	char string[81];
	int numVowels, numConsonants;
	puts("Enter string:");
	gets_s(string, 80);
	numVowels = countVowels(string);
	printf("Number of vowels = %d \n\n", numVowels);
	numConsonants = countConsonants(string);
	printf("Number of consonants = %d \n\n", numConsonants);
	return 0;
}

int getLength(char string[]) 
{
	int i = 0;
	for (i = 0; string[i] != '\0'; i++);
	printf("%d\n\n",i);
	return i;
}

int isAlphabetical(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isVowel(char c)
{
	if (c >= 'a' && c <= 'z') {
		c = c - 32;
	}
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int countVowels(char string[])
{
	int alphabet = 0;
	int v = 0;
	int x = 0;
	x = getLength(string);
	for (int i = 0; i < x; i++)
	{
		if (isAlphabetical(string[i]) == 1)
		{
			alphabet++;
		}
		if ((isVowel(string[i]) && isAlphabetical(string[i])) == 1)
		{
			v++;
		}
	}
	printf("alphabetical numbers = %d\n", alphabet);
	return v;
}

int countConsonants(char string[])
{
	int v = 0;
	int x = 0;
	x = getLength(string);
	for (int i = 0; i < x; i++)
	{
		if ((!isVowel(string[i]) && isAlphabetical(string[i])) == 1)
		{
			v++;
		}
	}
	return v;
}