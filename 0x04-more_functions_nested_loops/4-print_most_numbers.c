#include"main.h"

/**
 *
 * _most_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: (1)
 *
 * description: serie of numbers except 2 ans 4
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
		{
		if (n != 2 && n != 4)
		putchar(n + 48);
		n++;
		}

}
