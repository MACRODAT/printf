#include "main.h"

/**
 * _print_ptr - prints p
 * @arg: argument
 *
 * Return: write count
 */
int _print_ptr(va_list arg)
{
	void *ptr = va_arg(arg, void *);
	const char hexDigits[] = "0123456789abcdef";
	long address = (long)ptr;
	char addressStr[16];
	int index = 0;

	while (address > 0)
	{
		int digit = address % 16;

		addressStr[index++] = hexDigits[digit];
		address /= 16;
	}
	addressStr[index] = '\0';
	if (index > 0)
	{
		_putchar_val('0');
		_putchar_val('x');
		return (2 + _reverse_print(addressStr));
	}
	return (0);
}
