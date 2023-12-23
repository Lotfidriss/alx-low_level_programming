#include"main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Return: the number 0 up to 9
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
	if (n != 2 && n != 4)
	_putchar(n + 48);
	n++;
	}
	_putchar('\n');
}
