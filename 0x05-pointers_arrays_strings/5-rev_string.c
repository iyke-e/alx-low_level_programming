#include "main.h"

/**
 * rev_string - write function that reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char str[10000];
	int i, r;

	for (i = 0; s[i] != 0; i++)
	{
		str[i] = s[i];
	}

	for (r = i - 1, i = 0; r >= 0; r--, i++)
	{
		s[r] = str[i];
	}
}
