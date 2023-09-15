#include "main.h"
/**
 * print_traingle - funtions prints triangle usig character #
 * @size: The size of the traingle.
 * Return: void
 */
void print_triangle(int size)/*print_traingle returns 0 success*/
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
