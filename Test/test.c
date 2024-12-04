#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	stdout_to_file(char const *file, ((int)*fun(const char *, ...)), const char *format, ...);
int main()
{
	char *fexp = "exp.txt";
	char *fres = "res.txt";
	int i, exp, res;

	for (i = -128; i < 128; i++)
	{
		exp = stdout_to_file(fexp, printf,"char[%d] = %c", i, i);
		res = stdout_to_file(fres, ft_printf,"char[%d] = %c", i, i);
	}

	return 0;
}

int	stdout_to_file(char const *file, ((int)*fun(const char *, ...)), const char *format, ...)
{
	FILE *fl = freopen(file, "w", stdout);
	if (!fl)
	{
		perror("failed to open file for redirction of stdout");
		return (-1);
	}

	va_list	ap;
	int	res;

	va_start(ap, format);
	res = fun(format, ap);
	va_end(ap);
	return (res);
}
