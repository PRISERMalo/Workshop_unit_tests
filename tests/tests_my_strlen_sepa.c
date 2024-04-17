#include "tests_includes.h"

Test(my_strlen_sepa, test_my_strlen_sepa, .init=redirect, .timeout=1)
{
    cr_assert(my_strlen_sepa("toto", "a") == 4);
}
Test(my_strlen_sepa, test_my_strlen_sepaa, .init=redirect, .timeout=1)
{
    cr_assert(my_strlen_sepa(NULL, "a") == -1);
}
Test(my_strlen_sepa, test_my_strlen_separ, .init=redirect, .timeout=1)
{
    cr_assert(my_strlen_sepa("toto", NULL) == -1);
}
Test(my_strlen_sepa, test_my_strlen_sea, .init=redirect, .timeout=1)
{
    cr_assert(my_strlen_sepa("toto", "o") == 1);
}