#include "main.h"

/**
 * _print_char - writes char
 * @arg: arg
 *
 * Return: success characters.
 */
int _print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	if (c)
	{
		_putchar(&c);
		return (1);
	}
	return (0);
}
