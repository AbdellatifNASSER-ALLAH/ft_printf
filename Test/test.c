#include "test.h"

int main()
{
	printf("\nreturn %%p = -1 std : %d\n", printf("%p", -1));
	printf("\nreturn %%p = -1 ft_ : %d\n", ft_printf("%p", -1));

	printf("\nreturn %%p = 1 std : %d\n", printf("%p", 1));
	printf("\nreturn %%p = 1 ft_ : %d\n", ft_printf("%p", 1));

	printf("\nreturn %%p = INT_MIN std : %d\n", printf("%p", INT_MIN));
	printf("\nreturn %%p = INT_MIN ft_ : %d\n", ft_printf("%p", INT_MIN));

	printf("\nreturn %%p = INT_MAX std : %d\n", printf("%p", INT_MAX));
	printf("\nreturn %%p = INT_MAX ft_ : %d\n", ft_printf("%p", INT_MAX));

	printf("\nreturn %%p = ULONG_MAX std : %d\n", printf("%p", ULONG_MAX));
	printf("\nreturn %%p = ULONG_MAX ft_ : %d\n", ft_printf("%p", ULONG_MAX));

	printf("\nreturn %%p = -ULONG_MAX std : %d\n", printf("%p", -ULONG_MAX));
	printf("\nreturn %%p = -ULONG_MAX ft_ : %d\n", ft_printf("%p", -ULONG_MAX));

	return (0);
}
