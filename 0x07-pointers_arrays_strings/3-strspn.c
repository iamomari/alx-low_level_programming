#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the sustring of characters to match
 *
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int r;

	while (*s)
	{
		
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				len++;
				break;
			}
		
			else if (accept[r + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
