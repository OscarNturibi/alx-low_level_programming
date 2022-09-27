#include "main.h"
/**
 *_memset - fills memory with a constant byte.
 *fills the first n bytes of the memory area pointed
 *to by s with the constant b.
 *@s: pointer to memory area.
 *@b: constant to fill memory with.
 *@n: bytes of the memory area to be filled.
 *Return: dest.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Declaring FOR*/
	for (i = 0; i < n; i++)
	{
		(s + i) = b;/*add 1 position s/
	}
	/*END FOR*/

	return (s);
}
