#include"main.h"

/**
 * test_islower - Test the _islower function
 *
 * @n: Number to pass to _islower function
 *
 * Return: 1 if 'c' lower otherwise always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
