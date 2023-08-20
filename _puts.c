#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: The length of the string
 */
int _puts(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
