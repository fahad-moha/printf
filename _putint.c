#include "main.h"

/**
 * _putint - prints an integer to stdout
 * @n: The integer to print
 *
 * Return: The number of digits printed
 */
int _putint(int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += _putint(n / 10);

	_putchar('0' + (n % 10));
	count++;

	return (count);
}
