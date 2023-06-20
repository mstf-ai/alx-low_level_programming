#include "main.h"
/**
 * _islower - check if char is lowercase
 *
 * Return: 1 if char is lowercase, 0 if is not.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

