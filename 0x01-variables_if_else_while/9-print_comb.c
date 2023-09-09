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

	for (letter = 0; letter <= 9; letter++)
{
	putchar(letter);
	putchar(', ');
}
	putchar('\n');

	return (0);
}
