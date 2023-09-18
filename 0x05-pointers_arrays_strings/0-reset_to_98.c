#include<stdio.h>
#include"main.h"

/**
 * reset_to_98 -  parameter and updates the value it points to to 98
 * Return: always (0)
 * @n : number 98
*/

void reset_to_98(int *n)
{
	int n;
	int *p = &n;

	*p = 98;
	printf("%d\n", n);

}
