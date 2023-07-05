#include "main"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: Square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - Recursive helper function to find the square root
 * @n: Number to find the square root of
 * @start: Start of the search range
 * @end: End of the search range
 *
 * Return: Square root if found, -1 otherwise
 */
int sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return -1;

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
		return mid;
	else if (square < n)
		return sqrt_helper(n, mid + 1, end);
	else
		return sqrt_helper(n, start, mid - 1);
}
