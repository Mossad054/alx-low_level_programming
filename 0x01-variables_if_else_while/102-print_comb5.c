#include <stdio.h>
/**
 * main - prints all posible combinations of two  digits numbers
 * Return: always 0 (success)
 */
int main(void)/*main returns 0 success*/
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for  (j = 0; j < 100; j++)
		{
		if (i < j)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98 || j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
}
