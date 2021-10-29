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
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
