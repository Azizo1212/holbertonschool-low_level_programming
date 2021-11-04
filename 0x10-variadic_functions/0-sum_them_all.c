#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - check the code
 * @n: number of parameters
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
		sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
		return sum;
}


