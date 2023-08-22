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

	if (!str || str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (_putchar(str) > 0)
			success++;
		str++;
	}
	return (success);
}

/**
 * _print_str_asc - writes string
 * @arg: arg
 *
 * Return: success characters.
 */
int _print_str_asc(va_list arg)
{
	int success = 0, x = 0;
	char *str;

	str = va_arg(arg, char *);

	if (!str || str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar_val('\\');
			_putchar_val('x');
			x = *str - '0' + 48;
			if (x < 16)
			{
				_putchar_val('0');
				success += 3 + _handle_print_hex(*str - '0' + 48, 'A');
			}
			else
				success += 2 + _handle_print_hex(*str - '0' + 48, 'A');
		}
		else if (_putchar(str) > 0)
			success++;
		str++;
	}
	return (success);
}
