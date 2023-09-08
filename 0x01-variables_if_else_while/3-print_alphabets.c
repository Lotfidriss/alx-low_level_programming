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
	char letter = 'a' ;
	char Letter = 'A' ;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}
	for (Letter <= 'Z'; letter++; )
{
	putchar(Letter);
}
	putchar('\n');

	return (0);
}
