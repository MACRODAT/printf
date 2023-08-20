#include "main.h"

/**
 * _print_str - writes string
 * @arg: arg
 *
 * Return: success characters.
 */
int _print_str(va_list arg)
{
	int success = 0;
	char *str;

	str = va_arg(arg, char *);

	while (*str)
	{
		if (_putchar(str) > 0)
			success++;
		str++;
	}
	return (success);
}
