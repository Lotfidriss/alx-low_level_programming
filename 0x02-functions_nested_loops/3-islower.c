#include"main.h"

/**
 * _islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 *
 * Return: 1 if 'c' lower otherwise always 0
 *
 * description: Test the _islower function
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
