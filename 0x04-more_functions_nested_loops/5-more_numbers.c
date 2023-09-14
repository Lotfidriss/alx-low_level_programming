#include"main.h"

/**
 * more_numbers - function that prints the numbers from 0 to 14
 * Return: 10 times of numbers 0 up to 14
 */
void more_numbers(void)
{
	int i, j, count;
	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	int count = j;
	if (count > 9)
	{
	_putchar(1 + 48);
	count = j % 10;
	}
	_putchar(count + 48);
	}
	_putchar('\n');
	}
}
