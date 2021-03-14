#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks digit
 * @s: string
 * Return: 1 if digit, 0 if not
 *
 */
int _isdigit(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		if (*(s + count) > '9' || *(s + count) < '0')
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - adds interger
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
