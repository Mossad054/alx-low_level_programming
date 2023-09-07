#include<stdio.h>
/**
  *main -Entrypoint
  *Return:always 0 (succeed)
  */
int main(void)

{
	printf("Size of a char: %dlu byte(s)\n", sizeof(char));
	printf("Size of an int: %dlu byte(s)\n", sizeof(int));
	printf("Size of a long int: %dlu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %dlu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %dlu bytes(s)", sizeof(float));
	return(0);
}
