#include "tests_includes.h"

Test(my_array_len, test_my_array_len, .init=redirect, .timeout=1)
{
    char *my_array[] = {"1", "2", "3", NULL};

    cr_assert(my_array_len(my_array) == 3);
    cr_assert(my_array_len(NULL) == -1);
}
