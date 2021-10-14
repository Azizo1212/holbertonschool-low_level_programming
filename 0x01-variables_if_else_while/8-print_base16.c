#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line.
 * Return: 0 success
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
