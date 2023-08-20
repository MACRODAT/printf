#ifndef WRITEFUNCTION
#define WRITEFUNCTION

#include <unistd.h>
#include <stdarg.h>

int _putchar(const char *c);
int _printstr(const char *str);
int _printf(const char *format, ...);

typedef struct proto
{
	char *code;
	int (*f)(va_list);
} proto;

#endif
