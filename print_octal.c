#include "main.h"

/**
 * _print_octal - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_octal(va_list args)
{
	unsigned int octal, decimal = 0;
	int i = 1;
	octal = 0;

	decimal = va_arg(args, long int);
	while (decimal != 0)
	{
		octal += (decimal % 8) * i;
		decimal /= 8;
		i *= 10;
	}
	return (_handle_print_unsigned_int(octal, 0));
}
