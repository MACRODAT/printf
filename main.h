#ifndef WRITEFUNCTION
#define WRITEFUNCTION

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_LEN 1024

/**
 * struct proto - ee
 * @code: type
 * @f: type
 *
 */
typedef struct proto
{
	char *code;
	int (*f)();
} proto;

int _putchar(const char *c);
int _putchar_val(const char c);
int _writer(const char c);
int _print_str(va_list arg);
int _print_percent(void);
int _print_char(va_list arg);
int _printf(const char *format, ...);
int continueFunction(const char *format, va_list va, proto protos[]);
int handle_args(const char *format, int *index, va_list args, proto protos[]);
int _print_digit(va_list args);
int _print_unsigned(va_list args);
int _reverse_print(const char *s);
int _handle_print_unsigned_int(unsigned int digit, int writeCount);
int _print_binary(va_list args);



#endif
