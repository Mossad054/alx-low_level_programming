#include "main.h"
/**
 * _isupper -prog checks for uppercase character
 * @c: Variable text
 * Return: Always 1 for sucess and 0 for failure
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
