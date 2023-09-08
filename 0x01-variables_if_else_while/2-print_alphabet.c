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

	for (letter = 'a'; letter <= 'z'; ++letter)
	{putchar(letter); }

	putchar("\n");

	return (0);
}
