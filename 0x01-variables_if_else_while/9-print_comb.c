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
	int letter;

	for (letter = 0; letter <= 9; letter++)
{
	putchar('0' + letter);
	if (letter != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');

	return (0);
}
