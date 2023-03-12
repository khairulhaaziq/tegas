#ifndef TEGAS_H
# define TEGAS_H

#include "tegas.c"

//unit
static int	assert_eq_int(int expected, int output);
static int	assert_eq_str(char *expected, char *output);
//runner
static int	run_tests(char *message, int tests[], int length);

#endif