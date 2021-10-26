#include "main.h"
#include <stdio.h>

/**
 * factorial - eturns the factorial of a given number.
 * @n:int
 * Return: n
 */
int factorial(int n)
{
	if (n<0)
		return (-1);
	else if (n <= 1 && n >=0)
		return (1);
	else
		return (n * factorial(n - 1));
}
