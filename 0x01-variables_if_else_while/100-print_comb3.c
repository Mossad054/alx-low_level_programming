#include <stdio.h>

/**
 * main - print all combination of two digits
 * Return: always 0 (succes)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

