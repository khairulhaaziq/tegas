#include <stdio.h>
#include <string.h>

//units
static int	assert_eq_int(int expected, int output)
{
	if (expected != output)
	{
		printf("Expected %d, output %d. FAIL\n", expected, output);
		return (1);
	};
	printf("Expected %d, output %d. PASS\n", expected, output);
	return (0);
}

static int	assert_eq_str(char *expected, char *output)
{
	if (strcmp(expected, output))
	{
		printf("Expected %s, output %s. FAIL\n", expected, output);
		return (1);
	};
	printf("Expected %s, output %s. PASS\n", expected, output);
	return (0);
}


//runner
static int	run_tests(char *message, int tests[], int length)
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
