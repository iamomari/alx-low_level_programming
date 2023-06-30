#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: Second string
 * @n: number of bytes to concatenate from second string.
 *
 * Return:a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	// Find the length of the destination string
	

	while (dest[dest-len] != '\0')
		dest_len++;

	//copy at most n bytes from src to dest
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + 1] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
