#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 0-9 using putchar
 *
 * Return: 0 (Success)
 */


int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
