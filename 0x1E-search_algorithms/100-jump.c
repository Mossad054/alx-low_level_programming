nclude "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1
 *         or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, step, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int)sqrt((double)size);
	step = 0;
	prev = 0;

	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (; prev < (int)size && prev <= step; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

