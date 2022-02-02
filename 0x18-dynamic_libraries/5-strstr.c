#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: string to check
 * @needle: substring to check for
 * Return: a pointer to beginning of located substring or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int ch;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ch = 0;

		if (haystack[ch] == needle[ch])
		{
			do {
				if (needle[ch + 1] == '\0')
					return (haystack);

				ch++;

			} while (haystack[ch] == needle[ch]);
		}

		haystack++;
	}

	return ('\0');
}
