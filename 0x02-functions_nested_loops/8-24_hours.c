#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -prints every minute of the day of Jack Bauer
 * @a:int 
 *
 * Return: no
 */
void jack_bauer(void)

{
int a;
int b;

	for (a = 0; a <= 23; a++) /*First for*/
	{
		for (b = 0; b <= 59; b++) /*Second for*/
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');

		}
	}
}
