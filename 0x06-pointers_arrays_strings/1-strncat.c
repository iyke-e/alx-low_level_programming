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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
