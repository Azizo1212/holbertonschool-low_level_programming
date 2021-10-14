#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line.
 * Return: 0 success
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
