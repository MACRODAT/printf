#include "main.h"

/**
 * _printf - writes formatted output
 * @format: the format
 *
 * Return: success characters.
 */
int _printf(const char *format, ...)
{
	int successWrites = 0, flag = 0;
	va_list args;
	proto protos[] = { {"%", _print_percent}, {"c", _print_char}, {"s", _print_str}, {NULL, NULL} }, *p;

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
				{
					successWrites += p->f(args);
					break;
				}
				p++;
			}
			if (!p->code && *format != ' ')
			{
				if (*format == '\0')
					return (-1);
				successWrites += _print_percent() + 1;
				_putchar(format);
			}
		}
		else
			if (_putchar(format) > 0)
				successWrites++;
		format++;
	}
	va_end(args);
	return (successWrites);
}
