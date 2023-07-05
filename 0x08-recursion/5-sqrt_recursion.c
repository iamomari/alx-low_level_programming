#include "main.h"

/**
 * _sqrt - Recursive helper function to find the square root
 * @n: Number to find the square root of
 * @i: Base number
 *
 * Return: Natural square root of number i or -1 if otherwise
 */
int _sqrt(int n, int i)
{
	if (n * n == i)
		return n;
	if (n * n > i)
		return -1;
	return _sqrt(n + 1, i);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: Natural square root of number n or -1 if otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	return _sqrt(0, n);
}
