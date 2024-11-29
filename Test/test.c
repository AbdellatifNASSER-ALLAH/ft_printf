#include "../Project/ft_printf.h"
#include <stdio.h>
#include <limits.h>


int main()
{
	int x = UINT_MAX;
	printf(" = %d\nReturn : %d\n", x, ft_puthex('X', x));
	printf(" = %d\nReturn : %d\n", x, printf("%X", x));
	return 0;
}
