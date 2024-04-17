#include "tests_includes.h"

Test(str_is_token, test_str_is_token, .init=redirect, .timeout=1)
{
    cr_assert(str_is_token(NULL, "to") == false);
}
Test(str_is_token, test_str_is_tokenn, .init=redirect, .timeout=1)
{
    cr_assert(str_is_token("to", "to") == true);
}
Test(str_is_token, test_str_is_tokn, .init=redirect, .timeout=1)
{
    cr_assert(str_is_token("to", NULL) == false);
}
Test(str_is_token, test_str_is_tkenn, .init=redirect, .timeout=1)
{
    cr_assert(str_is_token("to", "") == false);
}
Test(str_is_token, test_str_is_tkn, .init=redirect, .timeout=1)
{
    cr_assert(str_is_token("", "NULL") == false);
}
Test(str_is_token, test_st_is_tkenn, .init=redirect, .timeout=1)
{
    cr_assert(str_is_token("to", " ") == false);
}