#include"main.h"

/**
 * print_alphabetx100 - utiler _putchar
 *
 * description: print_alphabet_x10 function
 *
 * Return: (0)
 */

void print_alphabet_x10(void)

{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);

		}
	_putchar('\n');
	}
}
