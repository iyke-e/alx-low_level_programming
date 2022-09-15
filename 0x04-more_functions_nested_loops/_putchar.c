#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charactere c to stdout
 * @c: The character we want to print
 * Return: 1 on sucess
 * on error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
