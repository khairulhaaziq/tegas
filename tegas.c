#include <stdio.h>

int	assert(int expected, int output)
{
	if (expected != output)
	{
		printf("Expected %d, output %d. FAIL\n", expected, output);
		return (1);
	};
	printf("Expected %d, output %d. PASS\n", expected, output);
	return (0);
}

int	run_tests(char *message, int tests[], int length)
{
	int i = 0;
	int error = 0;

	while(i < length)
	{
		error += tests[i];
		i++;
	}
	printf("Error: %d \n", error);
	error > 0 ? printf("\"%s FAIL\" \n", message) : printf("\"%s PASS\" \n", message);
	return (error);
};
