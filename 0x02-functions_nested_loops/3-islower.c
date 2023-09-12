#include"main.h"

/**
 * _is lower - function check if char is lower
 *
 * @c: check input of function
 *
 * Return: 1 if 'c' lower otherwise always 0
 */

	int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
		return (0);
}
