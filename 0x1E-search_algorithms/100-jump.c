#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, step, prev;

	if (array == NULL || size == 0)
		return (-1);
	jump = (size_t)sqrt(size);
	step = 0;
	prev = 0;


	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	for (; prev < size && prev <= step; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

