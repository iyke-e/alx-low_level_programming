#include "main.h"

/**
 * _strcpy - copy string pointed by src and return value to dest pointer
 * @dest: place to copy the string to
 * @src: the source string to copy.
 * Return: pointer to @dest.
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
