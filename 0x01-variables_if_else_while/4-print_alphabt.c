#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 (success)
 */
int main(void)/*return  main 0 sucessful*/
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
