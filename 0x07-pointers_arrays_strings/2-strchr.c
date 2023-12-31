#include "main.h"

/**
 * _strchr - Locates character in a string
 * @s: Pointer to the string
 * @c: Character to be located
 *
 * Return: string after character or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == '\0' && *s == c)
	{
		return (s);
	}

	return (s + 1);
}
