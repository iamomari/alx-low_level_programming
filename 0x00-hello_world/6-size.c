#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{

	printf("Size of a char: %a byte(s)\n", sizeof(char));
        printf("Size of an int: %b byte(s)\n", sizeof(int));
        printf("Size of a float: %f byte(s)\n", sizeof(float));
        printf("Size of a long: %d byte(s)\n", sizeof(long int));
        printf("Size of a long long: %d byte(s)\n", sizeof(long long int));
       	return (0);
}
