#include "test.h"

int	stdout_to_file(char const *file, int (*fun)(const char *, ...), const char *format, ...)
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

	fflush(stdout);  // Ensure all output is written to the file
	freopen("/dev/tty", "w", stdout);  // Restore stdout to terminal
	return (res);
}


int compare_files(int exp, int res, const char *fexp, const char *fres)
{
	// Check if the number of characters printed match
	if (exp != res) {
		printf("Number of characters printed differ: Expected = %d, Result = %d\n", exp, res);
	}

	// Open both files for reading
	FILE *file1 = fopen(fexp, "r");
	FILE *file2 = fopen(fres, "r");

	if (!file1 || !file2) {
		perror("Error opening files");
		if (file1) fclose(file1);
		if (file2) fclose(file2);
		return 1;
	}

	char line1[1024], line2[1024];
	int line_number = 1;
	int files_differ = 0;

	// Read both files line by line and compare
	while (fgets(line1, sizeof(line1), file1) && fgets(line2, sizeof(line2), file2)) {
		if (strcmp(line1, line2) != 0) {
			files_differ = 1;
			printf("Difference found at line %d:\n", line_number);
			printf("\tExpected: %s\n", line1);
			printf("\tResult:   %s\n", line2);
			return (1);
		}
		printf("\tExpected: %s\n", line1);
		printf("\tResult:   %s\n", line2);
		line_number++;
	}

	// Check if one file has extra lines
	if (!feof(file1) || !feof(file2)) {
		files_differ = 1;
		printf("Files differ in length.\n");
		if (!feof(file1)) {
			printf("Extra lines in expected file:\n");
			while (fgets(line1, sizeof(line1), file1)) {
				printf("%s", line1);
			}
		}
		if (!feof(file2)) {
			printf("Extra lines in result file:\n");
			while (fgets(line2, sizeof(line2), file2)) {
				printf("%s", line2);
			}
		}
	}

	// Close the files
	fclose(file1);
	fclose(file2);

	if (files_differ){
		printf("files r diff");
		return (1);
	}
	printf("Files are identical.\n");
	return (0);

}

