#include "main.h"
#include <string.h>

/**
 * print_rev - print string en revers
 * @s: string
 */
	void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{	_putchar(*s);
		s--;
	}

	_putchar('\n');

}
