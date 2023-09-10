#include <stdio.h>

/**
 * main - print all combination of two digits
 * Return: always 0 (success)
 */
int main(void)/*main returns 0 sucess**/
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');/*printsnew line*/
	return (0);
}

