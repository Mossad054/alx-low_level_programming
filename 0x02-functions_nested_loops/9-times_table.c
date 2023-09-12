#include "main.h"
#include <stdio.h>

// Function declaration
void times_table(void);

int main()
{
    // Call the times_table function
    times_table();
    return 0;
}

/**
 * times_table - prints 9 times table starting with 0
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
	{
            result = i * j;
            if (j == 0)
                printf("%d, ", result);
            else
	    {
                printf("%2d", result);
                if (j != 9)
                    printf(",");
            }
        }
        printf("\n");
    }
}

