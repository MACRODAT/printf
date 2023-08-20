#include "../main.h"
#include "../writeFunction.c"

int main(void)
{
	int success;
	char *s = "%s\nhello %%";
	char *a1 = "Argument 1 processed.\0";
	char *a2 = "Argument 2 processed.\0";
	char a3 = 'A';
	success = _printf(s, a1, 'B');
	return (success);
}
 