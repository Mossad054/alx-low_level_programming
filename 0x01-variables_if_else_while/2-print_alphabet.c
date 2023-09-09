#include <stdio.h>
/**
 * main - Prints the alphabets
 *
 * Return Always: 0 (Success)
 */
int main(void) /*int main is zero */
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
