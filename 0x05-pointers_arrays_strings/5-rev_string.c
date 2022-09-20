#include "main.h"

/**
 * rev_string - write function that reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, len = 0;
	char h;

	while (s[i])
	{
		h[i] = s[i];
		i++;
	}

	for  (i = i - 1; i >= 0; i--, len++)
		s[i] = s[len];
}
