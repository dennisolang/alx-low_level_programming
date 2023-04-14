#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, bin1 = 0, bin2 = 0;
while (s1 && s1[bin1])
bin1++;
while (s2 && s2[bin2])
bin2++;
if (n < bin2)
s = malloc(sizeof(char) * (bin1 + n + 1));
else
s = malloc(sizeof(char) * (bin1 + bin2 + 1));
if (!s)
return (NULL);
while (i < bin1)
{
s[i] = s1[i];
i++;
}
while (n < bin2 && i < (bin1 + n))
s[i++] = s2[j++];
while (n >= bin2 && i < (bin1 + bin2))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
