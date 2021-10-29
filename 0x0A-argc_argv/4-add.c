#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all arguments it receives.
 * @argc: length of table
 * @argv: table of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, digit, x = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if ( argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		x = x + atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
