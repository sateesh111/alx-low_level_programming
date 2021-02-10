#include "halberton.h"

/**
 * _abs - compute absolute value
 *
 * @num: value to compute
 *
 * Return: num, the absolute value
 */
int _abs(int num)
{
if (num >= 0)
{
return (num);
}
else
{
num = -num;
return (num);
}
}

