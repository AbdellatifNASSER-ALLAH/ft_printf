#include "test.h"

int main()
{
	char *fexp = "exp.txt";
	char *fres = "res.txt";
	int i, exp, res;

	for (i = -128; i < 128; i++)
	{
		exp = stdout_to_file(fexp, printf,"char[%d] = %c", i, i);
		res = stdout_to_file(fres, ft_printf,"char[%d] = %c", i, i);
		if (compare_files(exp, res, fexp, fres))
			break;
	}
	// Cleanup
	remove(fexp);
	remove(fres);
	return 0;
}
