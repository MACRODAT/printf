#include "main.h"
#include <unistd.h>

/**
 * _handle_print_unsigned_int - prints unsgined
 * @digit: number
 * @writeCount: number
 *
 * Return: write count
*/
int _handle_print_unsigned_int(unsigned int digit, int writeCount)
{
	int i = 0;
	char s[1000];

	if (digit == 0)
	{
		_putchar_val('0');
		return (1);
	}
	if (digit < 10)
	{
		_putchar_val('0' + digit);
		return (++writeCount);
	}
	while (digit > 0)
	{
		s[i++] = ('0' + digit % 10);
		digit /= 10;
	}
	s[i] = '\0';
	writeCount += _reverse_print(s);
	return (writeCount);
}
/**
 * _print_digit - print integers, not the
 * most efficient
 * @args: argument
 *
 * Return: writes
 */

int _print_digit(va_list args)
{
	int digit = va_arg(args, int);
	int writeCount = 0;

	if (digit < 0)
	{
		digit *= -1;
		_putchar_val('-');
		writeCount++;
	}
	return (_handle_print_unsigned_int(digit, writeCount));
}
/**
 * _print_unsigned - prints unsgined
 * @args: arguments
 *
 * Return: write count
*/
int _print_unsigned(va_list args)
{
	unsigned int digit = va_arg(args, unsigned int);

	return (_handle_print_unsigned_int(digit, 0));
}
