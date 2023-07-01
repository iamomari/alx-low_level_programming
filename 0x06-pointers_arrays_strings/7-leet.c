#include "main.h"

/**
 * leet - encode a string into 1337
 * @S: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	char *old = "aAeEoOtTlL";
	char *new = "4433007711";
	char *p = s;

	while (*s)
	{
		i = 0;
		while (old[i] != '\0')
		{
			if (old[i] == *s)
			{
				*s = new[i];
				break;
			}
			i++;
		}
		s++;
	}
	return p;
}
