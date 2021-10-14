#include <stdio.h>

/**
 * main - print the alphabet in lowercase, followed by a new line.
 * Return: 0 success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
