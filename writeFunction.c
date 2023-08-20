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
	proto protos[] = {
		{"%", _print_percent}, {"c", _print_char}, {"s", _print_str}, {NULL, NULL}
	};
	proto *p;

	if (!format)
		return (-1);
	va_start(args, format);
	successWrites = continueFunction(format, args, protos, p);
	va_end(args);
	return (successWrites);
}
