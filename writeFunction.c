#include "main.h"

/**
 * _printf - writes formatted output
 * @format: the format
 *
 * Return: success characters.
 */
int _printf(const char *format, ...)
{
	int successWrites = 0;
	va_list args;
	proto protos[] = {
		{"%", _print_percent}, {"c", _print_char}, {"s", _print_str}, {NULL, NULL}
	};

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	successWrites = continueFunction(format, args, protos);
	va_end(args);
	return (successWrites);
}
