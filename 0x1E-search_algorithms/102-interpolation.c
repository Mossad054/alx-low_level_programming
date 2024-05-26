#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in an array
 * @value: the value to search for
 * Return: first index where value is located, or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low_level, high_level;

	if (array == NULL)
		return (-1);

	low_level = 0;
	high_level = size - 1;

	while (low_level <= high_level && value >= array[low_level] && value <= array[high_level])
	{
		if (low_level == high_level)
		{
			if (array[low_level] == value)
				return (low_level);
			return (-1);
		}

		pos = low_level + (((double)(high_level - low_level) / (array[high_level] - array[low_level])) * (value - array[low_level]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high_level = pos - 1;
		else
			low_level = pos + 1;
	}

	return (-1);
}

