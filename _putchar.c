#include "main.h"

/**
 * _writer - buffer writer
 * @c: the char
 * 
 * Return: write count
*/
int _writer(const char *c)
{
	static char buffer[1024];
	static int i;
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(const char *c)
{
	return (write(1, c, 1));
}

/**
 * _putchar_val - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_val(const char c)
{
	return (write(1, &c, 1));
}
