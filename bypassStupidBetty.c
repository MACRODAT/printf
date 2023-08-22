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
	int successWrites = 0, tmp, index = 0;

	while (format[index])
	{
		if (format[index] == '%')
		{
			tmp = handle_args(format, &index, args, protos);
			if (tmp == -1)
				return (-1);
			successWrites += tmp;
			(index)++;
			continue;
		}
		successWrites += _putchar(&format[index]);
		index++;
	}
	return (successWrites);
}

/**
 * handle_args - handling percent args
 * @format: format string
 * @index: index string
 * @args: va
 * @protos: va
 *
 * Return: writes
*/
int handle_args(const char *format, int *index, va_list args, proto protos[])
{
	int n_protos, i = 0, size = -1;

	(*index)++;
	n_protos = 12;
	if (!format[*index] || format[*index] == '\0')
		return (-1);
	for (i = 0; i < n_protos; i++)
	{
		if (*protos[i].code == format[*index])
		{
			size = protos[i].f(args);
			return (size);
		}
	}
	if (!format[*index + 1])
		return (-1);
	return (_putchar_val('%') + _putchar(&format[*index]));
}
