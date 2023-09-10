#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */
int main(void)/* main returns 0  always success*/
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);/*return 0 program  executed*/
}
