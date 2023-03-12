#include "add.c"
#include "tegas.h"

int	test(void)
{
	int	tests[] = {
	assert(3, add(1, 2)),
	assert(5, add(2, 2)),
	assert(7, add(3, 2)),
	assert(7, add(3, 4)),
	assert(9, add(6, 3)),
	assert(35, add(13, 22)),
	assert(40, add(20, 20)),
	assert(900, add(300, 600)),
	};

	return (run_tests("it should add", tests, 4));
};


