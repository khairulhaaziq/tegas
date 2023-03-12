#ifndef TEGAS_H
# define TEGAS_H

#include "tegas.c"

void	int_expected_to_be(int16_t expected, int16_t actual);
int	assert(int expected, int output);
int	run_tests(char *message, int tests[], int length);

#endif