#include "main.h"

/**
 * _print_ptr - prints in octal form
 * @args: argument list
 *
 * Return: write count
 */
int _print_ptr(va_list args)
{
	void *addrs = va_arg(args, void *);
	void **p = &addrs;
	char s[1000];
	int i = 0;
	long int add_dec = 0;
	int x;

	while (*p)
	{
		/*x = *p % 16;
		if (x < 10)
			s[i] = x + '0';
		else
			s[i] = x + 'a'
		s[i] = (*p + '0');
		i++;
		return (_handle_print_unsigned_int(octal, 0));
		*p /= 10;*/
	}
}
