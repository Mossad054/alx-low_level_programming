#include "main.h"

/**
 * print_numbers -functions checks for a digit through 0. to 9
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
