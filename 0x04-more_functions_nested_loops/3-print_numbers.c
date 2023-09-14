#include"main.h"

/**
 * _numbers - function that prints the numbers, from 0 to 9
 * Return: (1)
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
	putchar(n + 48);
	n++;
	}
}
