#ifndef TEGAS_H
# define TEGAS_H

#include "tegas.c"

int	assert(int expected, int output);
int	run_tests(char *message, int tests[], int length);

#endif