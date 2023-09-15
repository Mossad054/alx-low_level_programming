#include "main.h"

/**
 * _isupper -prog checks for uppercase characters
 * @c: Parameter
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
