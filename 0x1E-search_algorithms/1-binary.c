#include "search_algos.h"

/**
 * recursive_search - searches for a value
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: index
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - binary_search to return
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
