#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 * main - main output of the program
 * Return: always 0 (Success)
 */

int main(void)/*main return should be 0 then program is succesful*/
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
	putchar('\n');

	return (0);/*returns 0 program is success*/

}
