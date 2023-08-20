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
	int successWrites = 0, flag = 0, tmp = 0;
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
					tmp = p->f(args);
					successWrites += tmp;
					break;
				}
				p++;
			}
			if (!p->code && *format != ' ')
			{
				if (*format == '\0')
					return (-1);
				_print_percent();
				successWrites += 2;
				_putchar(format);
			}
		}
		else
		{
			_putchar(format);
			successWrites++;
		}
		format++;
	}
	return (successWrites);
}
