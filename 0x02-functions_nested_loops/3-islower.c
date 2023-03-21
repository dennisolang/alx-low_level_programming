#include "main.h"
/**
* _islower - Checks if a character is lowercase.
*  The character to be checked is c
* Return: 1 if the character is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
