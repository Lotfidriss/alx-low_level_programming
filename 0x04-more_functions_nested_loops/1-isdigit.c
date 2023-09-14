#include"main.h"

/**
 *
 * _digit - function that check for digit
 *
 * @c : input for digit
 *
 * Return: (1) if c is digit otherwise always (0)
 *
 * description :  function check for digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
