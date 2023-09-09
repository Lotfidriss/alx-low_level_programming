#include <stdio.h>

/**
 * main - this is the main
 *
 * Description: print the letter lowrcase
 *
 * Return: 0 (seccess)
 */


int main(void)
{
	char letter;
	int number;
	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}	
	for (letter = 'A'; letter <= 'F'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
