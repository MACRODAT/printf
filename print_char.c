#include "main.h"

/**
 * _print_char - writes char
 * @arg: arg
 *
 * Return: success characters.
 */
int _print_char(va_list arg)
{
	unsigned char c;

	c = va_arg(arg, unsigned int);

	if (c)
	{
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
