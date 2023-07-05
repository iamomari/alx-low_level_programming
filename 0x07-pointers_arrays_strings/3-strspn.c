#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the sustring of characters to match
 *
 * Return: len (SUCCESS)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
		
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
