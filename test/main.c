#include "../main.h"
#include "../writeFunction.c"

int main(void)
{
	int success;
	char *s = "hello world\n%s\n2-%s\nfinal %%words.\0";
	char *a1 = "Argument 1 processed.\0";
	char *a2 = "Argument 2 processed.\0";
	success = _printf(s, a1, a2);
	return (success);
}
