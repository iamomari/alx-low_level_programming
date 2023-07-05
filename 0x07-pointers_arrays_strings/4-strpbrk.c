#include"main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the set of bytes to search for
 *
 * Return: Pointer to the first occuraence in @s of any byte from @accept, or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return s;
			}
		}
		s++;

	}

	return NULL;
}
