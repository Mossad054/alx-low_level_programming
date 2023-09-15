#include "main.h"

/**
 * print_most_numbers -function checks for a digit 0 through 9.execpt 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
	if (z != 2 && z != 4)
		_putchar(z + '0');
	}
	_putchar('\n');
}
