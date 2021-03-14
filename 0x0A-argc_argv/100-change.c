#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change
 *
 * @argc: number of argument passed
 * @argv: array of argument passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int count2, left;
	int change = 0;
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	left = atoi(argv[1]);
	if (left <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (count < 5)
	{
		count2 = count;
		if (left >= cent[count])
		{
			while (count2 < 5)
			{
				if (left % cent[count2] == 0)
				{
					change = change + (left / cent[count2]);
					printf("%d\n", change);
					return (0);
				}
				change = change + (left / cent[count2]);
				left = left % cent[count2];
				count2++;
			}
		}
		count++;
	}
	return (0);
}
