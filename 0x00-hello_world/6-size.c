#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	ptintf("size of a char: %lu byte(s)", sizeof(char));
	ptintf("size of int: %lu byte(s)", sizeof(int));
	ptintf("size of a long int: %lu byte(s)", sizeof(long int));
	ptintf("size of a long long int: %lu byte(s)", sizeof(long long int));
	ptintf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
