#include "tests_includes.h"

Test(my_strlen, test_my_strlen, .init=redirect, .timeout=1)
{
    cr_assert(my_strlen("toto") == 4);
    cr_assert(my_strlen(NULL) == -1);
}