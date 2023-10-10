#include <stdio.h>

/**
* main - entry point
*
* Description: Print all possible different combinations
*
*
* Return: 0 (success)
*/


int main(void)
{
	int firstDigit, secondDigit;

	for (firstDigit = 0; firstDigit < 9; firstDigit++)
	{
	for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
		putchar(firstDigit + '0');
		putchar(secondDigit + '0');
			if (firstDigit != 8 || secondDigit != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

