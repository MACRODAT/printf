#include "main.h"

/**
 * _print_binary - prints
 * @args: argument
 *
 * Return: count
*/
int _print_binary(va_list args)
{
	char arr[10000];
	unsigned int d = va_arg(args, unsigned int);
	int i = 0;

	if (d == 0)
	{
		_putchar_val('0');
		return (1);
	}
	while (d)
	{
		arr[i++] = '0' + (d % 2);
		d /= 2;
	}

	return (_reverse_print(arr));
}
