#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 16 in lowercase.
 *
 * Return: 0 (Success)
 */


int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	digit = 'a';

	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
