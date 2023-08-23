Printf group work

Compiling :

Use main function
```
#include "./main.h"
#include <stdio.h>
#include "./print_char.c"
#include "./print_percent.c"
#include "./print_str.c"
#include "./print_octal.c"
#include "./print_digit.c"
#include "./print_binary.c"
#include "./print_hex.c"
#include "./print_rot.c"
#include "./print_ptr.c"
#include "./bypassStupidBetty.c"
#include "./_putchar.c"
#include "./_reverse_print.c"
#include "./writeFunction.c"

int main(void)
{
	int success, s2;
	char *s = "%p";
	char *a1 = "hello world";
	char *a2 = "okay";
	char a3;
	char a4 = 'C';
	char a5;
	int a6 = 3879;
	int a7 = 15;
	int *p = NULL;
	printf("--------------------\n");
	success = _printf(s, p, a6);
	printf("\n--------------------\n");
	s2 = printf(s, p, a6);
	printf("\n--------------------\n");
	printf("\n %d = %d", success, s2);
	return (success);
}
```
