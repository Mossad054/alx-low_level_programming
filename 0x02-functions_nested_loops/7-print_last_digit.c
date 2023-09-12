#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 * @n: The value number to be treated
 * Return: Value of the last digit of a number
 */

int print_last_digit(int n)/*int prints last_digit of n */
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
	last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
