#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("\nreturn std : %d\n", printf("%c",""));
	printf("\nreturn ft_ : %d\n", ft_printf("%c",""));
}
