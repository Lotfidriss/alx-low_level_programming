#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: variable
 * @b: variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c= &empty;

	*a = *c;
	*b = *a;
	*c = *b;
}
