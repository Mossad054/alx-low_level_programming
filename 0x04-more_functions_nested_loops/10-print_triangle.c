#include "main.h"
/**
 * print_traingle - funt prints_triangle using character #.
 * @size: The size of the traingle.
 * Return: void
 */

void print_traingle(int size)/*print_traingle 0 sucess */
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hash; index++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');

}

