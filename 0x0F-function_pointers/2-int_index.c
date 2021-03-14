#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: array
 * @size: Size of array
 * @cmp: Pointer to a function
 *
 * Return: The index array, -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]) != 0)
			return (num);
	}
	return (-1);
}
