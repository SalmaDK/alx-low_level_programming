#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digit single numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
