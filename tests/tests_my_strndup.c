#include "tests_includes.h"

Test(my_strndup, test_my_strndup_str_null, .init=redirect, .timeout=1)
{
    cr_assert(my_strndup(NULL, 1) == NULL);
}

Test(my_strndup, test_my_strndup_neg, .init=redirect, .timeout=1)
{
    cr_assert(my_strndup("toto", -1) == NULL);
}
// Test(my_strndup, test_my_strndup_ternaire, .init=redirect, .timeout=1)
// {
//     char *str = malloc(sizeof(char) * 5);
//     cr_assert(my_strndup(str, 3) == NULL);
// }
Test(my_strndup, test_my_strndup_ternaire2, .init=redirect, .timeout=1)
{
    char *str = malloc(sizeof(char) * 5);
    cr_assert(my_strndup(str, 5) == NULL);
}