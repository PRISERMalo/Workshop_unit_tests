#include "tests_includes.h"

Test(my_free, test_my_free, .init=redirect, .timeout=1)
{
    char *toto = malloc(sizeof(char) * 8);
    my_free(NULL);
    my_free(toto);
}