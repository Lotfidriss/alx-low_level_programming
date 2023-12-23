#include"main.h"

/**
 * print_sign - check the sign of number
 *
 * @n: Number to pass to _sign function
 *
 * Return: 1 is n is greater than zero 0 if n is zero -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
