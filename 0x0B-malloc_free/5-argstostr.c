#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all argument of a program
 *
 * @ac: number of argument
 * @av: array of argument
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count, count2, count3 = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (count = 0; count < ac; count++)
	{
		for (count2 = 0; av[count][count2]; count2++)
			count3++;
	}
	str = malloc((count3 + count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	count3 = 0;
	for (count = 0; count < ac; count++)
	{
		for (count2 = 0; av[count][count2]; count2++)
		{
			str[count3] = av[count][count2];
			count3++;
		}
		str[count3] = '\n';
		count3++;
	}
	str[count3] = '\0';
	return (str);
}
