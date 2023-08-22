#include "main.h"

/**
 * isAlpha - f
 * @c : char
 *
 * Return: 21
 */
int isAlpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/**
 * isUpperCase - f
 * @c: char
 *
 * Return: c
 */
int isUpperCase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * rot13 - f
 * @c: char
 *
 * Return: c
 */
char rot13(char c)
{
	if (isAlpha(c))
	{
		char base = isUpperCase(c) ? 'A' : 'a';

		return ((c - base + 13) % 26 + base);
	}
	return (c);
}

/**
 * _print_str_rot - f
 * @arg: char
 *
 * Return: count
 */
int _print_str_rot(va_list arg)
{
	char *text = va_arg(arg, char *);
	char str[100000];
	int success = 0;
	int i = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		str[i] = rot13(text[i]);
	}
	i = 0;
	while (str[i])
	{
		if (_putchar_val(str[i]) > 0)
			success++;
		i++;
	}
	return (success);
}
