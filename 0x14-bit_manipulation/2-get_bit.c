#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @j: number to check bits in
 * @indx: index at which to check the bit
 *
 * Return: value of the bit at the specified index, or -1 if there is an error
 */
int get_bit(unsigned long int j, unsigned int indx)
{
	unsigned long int divisor, check;


		if (indx > (sizeof(unsigned long int) * 8 - 1))

return (-1);

	divisor = 1 << indx;

	check = j & divisor;

	if (check == divisor)

		return (1);

	return (0);
}

