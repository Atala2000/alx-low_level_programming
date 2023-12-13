#include "search_algos.h"

/**
 * recursive_search - searches for value
 *
 *
 * @array: input
 * @size: size
 * @value: value
 * Return: idx
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
 * binary_search - binary search
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: idx
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}

/**
 * exponential_search - searches for a value
 *
 * @array: array
 * @size: size
 * @value: value
 * Return: idx
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	idx = 1;

	while (array[idx] < value && idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx *= 2;
	}

	next = (idx >= size) ? (size - 1) : idx;

	idx /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)idx, (int)next);

	result = binary_search(array + idx, (next + 1) - idx, value);

	if (result >= 0)
		result += idx;

	return (result);
}
