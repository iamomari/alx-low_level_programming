#include "main.h"

/**
 * swap_int - swaps the value of the two integers through a pointer
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	int c = *b;
	*a = c;
	*b = m;
}
