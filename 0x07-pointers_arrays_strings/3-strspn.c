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
	unsiigned int len = 0;
	int i, j;
	
	i = j = len = 0;

	if (*s == '\0' || *accept == '\0')
	{
		return len;
	}

	while (s[j] != ',')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				len++;
			}
		
			i++;
		}
		j++;
	}
	return len;
}
