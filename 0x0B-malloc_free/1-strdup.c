#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str:string.
 * Return: chs or null
 */
char *_strdup(char *str)
{
	char *chs;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	chs = malloc(sizeof(char) * (len + 1));
	if (chs == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		chs[i] = str[i];
	chs[len] = '\0';
	return (chs);
}
