#include "main.h"
/**
 * _strcat - appends tow strings
 * @dest: sting to be added to another
 * @src: string to be added to another
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i++])
		j++;
	for (i = 0; src[i] != 0; i++)
		dest[j++] = src[i];

	return (dest);
}
