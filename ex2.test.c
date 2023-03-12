#include "tegas.h"
#include "add.c"

int	test(void)
{
	int	tests[] = {
	assert_eq_int(3, add(1, 2)),
	assert_eq_int(5, add(2, 2)),
	assert_eq_int(7, add(3, 2)),
	assert_eq_int(7, add(3, 4)),
	assert_eq_int(9, add(6, 3)),
	assert_eq_int(35, add(13, 22)),
	assert_eq_int(40, add(20, 20)),
	assert_eq_int(900, add(300, 600)),
	assert_eq_str("haha", "hahas"),
	};

	return (run_tests("it should add", tests, 4));
};


