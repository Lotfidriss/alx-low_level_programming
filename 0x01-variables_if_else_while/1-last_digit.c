#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n
 *
 * Return: 0 (seccess)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		print("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		print("Last digit of %i is %i andis 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		print("Last digit of %i is %i and is less than 6 and not 0", n, digit);

	return (0);
}
