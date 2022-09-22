#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: number of bytes from src to be appeded to dest
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] != 0 && i < n; i++)
		dest[j] = src[i];

	return (dest);
}
