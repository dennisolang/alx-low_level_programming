#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
int i = 0;
while (*p != '\0')
{
p++;
}
while (i < n && *src != '\0')
{
*p++ = *src++;
i++;
}
*p = '\0';
return dest;
}

