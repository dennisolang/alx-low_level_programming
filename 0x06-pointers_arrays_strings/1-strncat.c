#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = 0
while (dest[a] != '\0')
{
a++
}
b = 0
while (b < n && src[b] != '\0')
{
dest[a] = src[b
a++
b++
}
dest[i] = '\0';
return (dest);
}
