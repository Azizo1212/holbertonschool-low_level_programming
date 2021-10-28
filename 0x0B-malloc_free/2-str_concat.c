#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated .
 * @s2: The string to be concatenated to s1.
 *
 * Return: NULL or result
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i, k = 0, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len])
		len++;
	while (s2[j])
	{
		j++;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[k++] = s1[i];
	for (i = 0; s2[i]; i++)
	{
		s[k++] = s2[i];
	}
	return (s);

}
