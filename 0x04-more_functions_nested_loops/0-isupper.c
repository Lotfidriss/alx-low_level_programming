#include"main.h"

/**
 * _isupper - function that check the letter if is uppercase
 * @c : input for alphabet
 * Return: (1) if c is uppercase otherwise always (0)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
