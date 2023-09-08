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

	for (letter = 'a', 'A'; letter <= 'z'; letter++; )
{
	putchar(letter);
}
	for (letter <= 'Z'; letter++)
{
	putchar(letter);
}
	putchar('\n');

	return (0);
}
