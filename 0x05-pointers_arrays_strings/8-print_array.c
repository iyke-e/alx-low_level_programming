#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of arrays of integer
 * @a: array of integer
 * @n: number of element to be prited
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
