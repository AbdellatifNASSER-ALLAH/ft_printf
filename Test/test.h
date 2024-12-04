#ifndef TEST_H
# define TEST_H

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int	stdout_to_file(char const *file, int (*fun)(const char *, ...), const char *format, ...);
int compare_files(int exp, int res, const char *fexp, const char *fres);

#endif
