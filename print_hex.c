#include "main.h"

/**
 * _handle_print_hex - prints helper
 * @decimalnum: decimal nbr
 * @maj: use uppercase
 *
 * Return: write count
 */
int _handle_print_hex(unsigned long decimalnum, char maj)
{
	unsigned long quotient, remainder;
	char hexadecimalnum[100];
	int j;

	j = 0;
	quotient = decimalnum;

	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = '0' + remainder;
		else
			hexadecimalnum[j++] = maj + remainder - 10;
		quotient = quotient / 16;
	}
	hexadecimalnum[j] = '\0';
	return (_reverse_print(hexadecimalnum));
}

/**
 * _print_hex - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_hex(va_list args)
{
	unsigned long decimalnum;

	decimalnum = va_arg(args, long int);
	if (decimalnum == 0)
	{
		_putchar_val('0');
		return (1);
	}

	return (_handle_print_hex(decimalnum, 'a'));
}
/**
 * _print_hex_maj - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_hex_maj(va_list args)
{
	unsigned long decimalnum;

	decimalnum = va_arg(args, long int);

	if (decimalnum == 0)
	{
		_putchar_val('0');
		return (1);
	}
	return (_handle_print_hex(decimalnum, 'A'));
}
