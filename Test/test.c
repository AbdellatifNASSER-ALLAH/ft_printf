#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int x;

	x = 0xf0000000;
	printf(" = %d\nReturn : %d\n", x, ft_puthex('X', x));
	printf(" = %d\nReturn : %d\n", x, printf("%X", x));

	x = 0;
	printf(" = %d\nReturn : %d\n", x, ft_puthex('X', x));
	printf(" = %d\nReturn : %d\n", x, printf("%X", x));

	x = 255; 
	printf(" = %d\nReturn : %d\n", x, ft_puthex('X', x));
	printf(" = %d\nReturn : %d\n", x, printf("%X", x));

	x = 305419896;
	printf(" = %d\nReturn : %d\n", x, ft_puthex('X', x));
	printf(" = %d\nReturn : %d\n", x, printf("%X", x));

	x = 4095;
	printf(" = %d\nReturn : %d\n", x, ft_puthex('x', x));
	printf(" = %d\nReturn : %d\n", x, printf("%x", x));

	return 0;
}

