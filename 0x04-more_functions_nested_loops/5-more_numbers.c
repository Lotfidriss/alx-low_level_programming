#include"main.h"

/**
 * more_numbers - function that prints the numbers from 0 to 14
 *
 * description : fuction print numbers
 */
void more_numbers(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			int count = j;

			if (count > 9)
			{
				_putchar(1 + 48);
				count = j % 10;
			}

			_putchar(count + 48);

		}
	_putchar('\n');

	}
}
