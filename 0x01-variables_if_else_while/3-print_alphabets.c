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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
	while (CH <= 'Z')
{
	putchar(CH);
	CH++;
}
	putchar('\n');

	return (0);
}
