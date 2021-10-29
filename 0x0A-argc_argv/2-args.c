#include <stdio.h>
/**
 * main -  prints all arguments it receives.
 * @argc: length of table
 * @argv: table of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
