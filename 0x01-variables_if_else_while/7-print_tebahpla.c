#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a-z in reverse.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}

