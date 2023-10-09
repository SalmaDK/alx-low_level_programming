#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all alphabet letters from 'a' to 'z'.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
