#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print 0, 1, .., 9, ..
 *
 * Return: 0 (Success)
 */


int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
	putchar(digit + '0');  /*Print the current digit as a character*/
	digit++;

		if (digit < 10)
		{
			putchar(',');      /* Print the comma separator*/
			putchar(' ');      /* Print the space separator*/
		}
	}

	putchar('\n');  /* Print a newline character at the end*/

	return (0);
}

