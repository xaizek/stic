#include "../src/stic.h"

#ifndef STIC_INTERNAL_TESTS
#error STIC_INTERNAL_TESTS must be defined when compiling tests for STIC itself.
#endif

#define without_logging(X) stic_disable_logging(); X; stic_enable_logging();
#define assert_test_passes(X) without_logging(X); stic_assert_last_passed();
#define assert_test_fails(X) without_logging(X); stic_assert_last_failed();

void test_assert_true();
void test_assert_false();
void test_assert_int_equal();
void test_assert_ulong_equal();
void test_assert_string_equal();
void test_assert_n_array_equal();

void test_fixture_stic();
void all_tests();

