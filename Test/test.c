#include "test.h"

int main() {
	int ret1, ret2;

	if (1) {
		// Test case 1: Character conversion ('c')
		ret1 = ft_printf("Character: %c\n", 'A');
		ret2 = printf("Character: %c\n", 'A');
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 2: String conversion ('s')
		ret1 = ft_printf("String: %s\n", "Hello");
		ret2 = printf("String: %s\n", "Hello");
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 3: Pointer address conversion ('p')
		int x = 42;
		ret1 = ft_printf("Pointer: %p\n", &x);
		ret2 = printf("Pointer: %p\n", &x);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 4: Integer conversion ('d') - Normal value
		ret1 = ft_printf("Integer (d): %d\n", 42);
		ret2 = printf("Integer (d): %d\n", 42);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 5: Integer conversion ('i') - Negative value
		ret1 = ft_printf("Integer (i): %i\n", -42);
		ret2 = printf("Integer (i): %i\n", -42);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 6: Unsigned integer conversion ('u') - Normal value
		ret1 = ft_printf("Unsigned (u): %u\n", 42);
		ret2 = printf("Unsigned (u): %u\n", 42);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 7: Hexadecimal conversion ('x') - Normal value
		ret1 = ft_printf("Hexadecimal (x): %x\n", 255);
		ret2 = printf("Hexadecimal (x): %x\n", 255);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 8: Uppercase hexadecimal conversion ('X') - Normal value
		ret1 = ft_printf("Hexadecimal (X): %X\n", 255);
		ret2 = printf("Hexadecimal (X): %X\n", 255);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case 9: Percent symbol ('%')
		ret1 = ft_printf("Percent: %%\n");
		ret2 = printf("Percent: %%\n");
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Edge case: Maximum signed integer ('d' and 'i')
		ret1 = ft_printf("Max signed integer (d): %d\n", 2147483647);
		ret2 = printf("Max signed integer (d): %d\n", 2147483647);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Edge case: Minimum signed integer ('d' and 'i')
		ret1 = ft_printf("Min signed integer (d): %d\n", -2147483648);
		ret2 = printf("Min signed integer (d): %d\n", -2147483648);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Edge case: Maximum unsigned integer ('u')
		ret1 = ft_printf("Max unsigned integer (u): %u\n", 4294967295U);
		ret2 = printf("Max unsigned integer (u): %u\n", 4294967295U);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Edge case: Small unsigned integer ('u')
		ret1 = ft_printf("Small unsigned integer (u): %u\n", 0);
		ret2 = printf("Small unsigned integer (u): %u\n", 0);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case: Large numbers (10,000 and 9,999)
		ret1 = ft_printf("Large number 10000 (d): %d\n", 10000);
		ret2 = printf("Large number 10000 (d): %d\n", 10000);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		ret1 = ft_printf("Large number 9999 (d): %d\n", 9999);
		ret2 = printf("Large number 9999 (d): %d\n", 9999);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);

		// Test case: Negative hexadecimal
		ret1 = ft_printf("Negative Hexadecimal (x): %x\n", -255);
		ret2 = printf("Negative Hexadecimal (x): %x\n", -255);
		printf("ft_printf returned: %d\nst printf returned: %d\n", ret1, ret2);
	}
	return 0;
}

