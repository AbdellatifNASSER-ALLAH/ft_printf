#include <stdio.h>

void print(void)
{
	write(1,"test\n", 5);
}
int main()
{
	int a;

	print();
	printf("\nchar return : %d\n---------------\n", printf("%c", 'c'));
	printf("\nstring return : %d\n---------------\n", printf("%s", "hello world"));
	printf("\nempty string return : %d\n---------------\n", printf("%s", ""));
	printf("\nNULL as address return : %d\n---------------\n", printf("%p", NULL));
	printf("\naddress of %%p return : %d\n---------------\n", printf("%p", "p"));
	printf("\ndecimal %%d return : %d\n---------------\n", printf("%x", 12));
	return 0;
}
