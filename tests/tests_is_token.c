#include "tests_includes.h"

Test(is_token, test_is_token, .init=redirect, .timeout=1)
{
    cr_assert(is_token('t', "ot") == true);
    cr_assert(is_token('a', "ot") == false);
    cr_assert(is_token('t', "") == false);
    cr_assert(is_token('t', NULL) == false);
}