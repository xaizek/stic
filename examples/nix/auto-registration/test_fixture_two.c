#include "stic.h"

TEST(est_asserting)
{
	assert_true(1 == 1);
	assert_false(1 == 2);
	assert_int_equal(1, 1);
}

TEST(assert_fails)
{
	assert_true(1 == 2);
}
