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
 * _printstr - writes string
 * @str: The string
 *
 * Return: success characters.
 */
int _printstr(const char *str)
{
	int success = 0;

	while (*str)
	{
		if (_putchar(str))
			success++;
		str++;
	}
	return (success);
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
	char *s;
	char tmp;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && !flag)
			flag = 1;
		else if (flag)
		{
			flag = 0;
			switch (*format)
			{
				case 'c':
					tmp = va_arg(args, int);
					_putchar(&tmp);
					successWrites++;
					break;
				case 's':
					s = va_arg(args, char *);
					successWrites += _printstr(s);
					break;
				case '%':
					goto printChar;
			}
		}
		else
		{
printChar:
			if (_putchar(format) > 0)
				successWrites++;
		}
		format++;
	}
	return (successWrites);
}
