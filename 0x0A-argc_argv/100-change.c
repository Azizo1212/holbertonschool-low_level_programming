#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change.
 * @argc: integer number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int c;
	int n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	while (c > 0)
	{
		if (c >= 25)
			c = c - 25;
		else if (c >= 10)
			c = c - 10;
		else if (c >= 5)
			c = c - 5;
		else if (c >= 2)
			c = c - 2;
		else if (c >= 1)
			c = c - 1;
		n++;
	}
	printf("%d\n", n);
	return (0);
}
