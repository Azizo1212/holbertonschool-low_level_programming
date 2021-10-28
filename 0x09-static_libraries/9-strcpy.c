#include "main.h"
#include<string.h>
/**
 *_strcpy - Write a function that copies the string pointed to by src
 *@dest: pointer char void
 *@src: pointer char source
 *Return: dest data
 */
char *_strcpy(char *dest, char *src)
{
int n, i;
n = strlen(src);
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
