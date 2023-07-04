#include "main.h"
/**
 * _memset - a function that fills n bytes of memory area
 * pointed to by s with constant byte b
 * @n: Number of bytes to be filled
 * @s: Pointer to the char memory area to be filled
 * @b: Value to be set
 *
 * Return: Pointer to the filled memory area(s)
 */
char *_memset(char * s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

        return (s);
}
