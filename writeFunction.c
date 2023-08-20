#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(const char *c)
{
	return (write(1, c, 1));
}

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
		if (_putchar(&c) > 0)
			return (1);
	}
	return (0);
}


/**
 * _print_percent - writes percent
 *
 * Return: success characters.
 */
int _print_percent()
{
	char p = '%';

	if (_putchar(&p))
		return (1);
	else
		return (0);
}

/**
 * _printf - writes formatted output
 * @format: the format
 *
 * Return: success characters.
 */
int _printf(const char *format, ...)
{
	int successWrites = 0;
	int flag = 0;
	va_list args;
	proto protos[] = {
		{"%", _print_percent}, {"c", _print_char}, {"s", _print_str}, {NULL, NULL}
	};
	proto *p;

	if (!format)
		return (-1);
	va_start(args, format);
	
	while (*format)
	{
		if (*format == '%' && !flag)
			flag = 1;
		else if (flag)
		{
			flag = 0;
			p = protos;
			while (p->code)
			{
				if (*(p->code) == *format)
					successWrites += p->f(args);
				p++;
			}
		}
		else
		{
			if (_putchar(format) > 0)
				successWrites++;
		}
		format++;
	}
	va_end(args);
	return (successWrites);
}
