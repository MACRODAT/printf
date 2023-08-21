#include "main.h"
#include <unistd.h>

/**
 * _reverse_print - prints strings in reverse
 * @s: string input
 *
 * Return: print count
*/
int _reverse_print(const char *s)
{
	int _len = 0, i = 0, count = 0;

	while (s[_len])
		_len++;

	for (i = _len - 1; i >= 0; i--)
	{
		count += _putchar((s + i));
	}

	return (count);
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
	int i = 0;
	int writeCount = 0;
	long int digit = va_arg(args, int);
	char s[1000];

	if (digit == '0')
	{
		_putchar_val('0');
		return (1);
	}

	if (digit < 0)
	{
		digit *= -1;
		_putchar_val('-');
		writeCount++;
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
