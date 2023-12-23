#include "main.h"

/**
 * swap_int - check the code
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = *b;
	*b = c;
}
