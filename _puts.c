#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: The length of the string
 */
int _puts(char *str)
{
	int count = 0;
	unsigned char ch = *str;

	if (str == NULL)
		return (_puts("(null)"));
	while (*str)
	{
		if (ch < 128)
			count += _putchar(ch);
		else
		{
			if ((ch & 0xE0) == 0xC0)
			{
				count += _putchar(ch);
				count += _putchar(*(str + 1));
				str++;
			}
			else if ((ch & 0xF0) == 0xE0)
			{
				count += _putchar(ch);
				count += _putchar(*(str + 1));
				count += _putchar(*(str + 2));
				str += 2;
			}
			else if ((ch & 0xF8) == 0xF0)
			{
				count += _putchar(ch);
				count += _putchar(*(str + 1));
				count += _putchar(*(str + 2));
				count += _putchar(*(str + 3));
				str += 3;
			}
			else
			{
				count += _putchar('?');
			}
		}
		str++;
	}
	return (count);
}
