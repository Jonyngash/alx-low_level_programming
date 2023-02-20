#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));

	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
