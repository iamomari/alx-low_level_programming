#include "main.h"

/**
 * _strncpy - copies n bytes of strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to copy from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr++ = *src++;
	}

	for (; i < n; i++)
	{
		*ptr++ = '\0';
	}

	return dest;
}
