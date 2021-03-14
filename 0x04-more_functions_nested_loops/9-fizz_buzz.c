#include <stdio.h>

/**
 * main - print numbers 1 through 100, multiple of 3 replaced by Fizz
 * multiple of 5 replaced by Buzz
 * multiple of both 3 and 5 replaced by FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((num % 5 == 0) && (num % 3 != 0))
		{
			printf("Buzz");
		}
		else if ((num % 3 == 0) || (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num < 100)
		{
			printf(" ");
		}
		num++;
	}
	printf("\n");
	return (0);
}
