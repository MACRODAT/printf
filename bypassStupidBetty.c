#include "main.h"

/**
 * continueFunction - continue
 * @format: format string
 * @args: va
 * @protos: va
 *
 * Return: nothing
*/
int continueFunction(const char *format, va_list args, proto protos[])
{
	int successWrites = 0, flag = 0;
	proto *p;

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

	return (successWrites);
}
