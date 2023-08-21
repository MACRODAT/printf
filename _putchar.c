#include "main.h"

/**
 * _writer - buffer writer
 * @c: the char
 *
 * Return: write count
*/
int _writer(const char c)
{
	static int i;
	int j = 0;
	static char buffer[BUFFER_LEN];

	if (c == -2 || i == BUFFER_LEN - 1)
	{
		if (c != -2)
			buffer[i++] = c;
		while (j < i)
		{
			write(1, (buffer + j), 1);
			j++;
		}
		i = 0;
		return (1);
	}

	buffer[i++] = c;
	return (1);
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
	return (_writer(*c));
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
	return (_writer(c));
}
