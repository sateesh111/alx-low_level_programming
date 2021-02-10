#include "holberton.h"

/**
 * _islower - cheack lowercase character
 *
 * @c: characters to be checked
 *
 * Return: 1 if its lowercase, 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
