#include "main.h"

/**
 * -print_rev_recursion - prints a string in reverse using recursion
 *  @s: Pointer to the string to be printed
 *
 *  Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
