#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * _memset fills memory with a constant byte
 * @n:  bytes of the memory area pointed to
 * @s: memory area pointer
 * @b: is the mwemory size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
	s[i] = b;
	}

return (s);
}
