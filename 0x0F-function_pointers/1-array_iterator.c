#include "function_pointers.h"

/**
 * array_iterator - prints arrays
 * @array: Array to print
 * @size: Size of array
 * @action: Pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t num;

	if (array == NULL || action == NULL)
		return;
	for (num = 0; num < size; num++)
		action(array[num]);
}
