#include "tests_includes.h"

Test(freen_array, test_freen_array, .init=redirect, .timeout=1)
{
    char **tab = malloc(sizeof(char *) * 3);
    tab[0] = malloc(sizeof(char) * 10);
    tab[1] = malloc(sizeof(char) * 10);
    tab[2] = NULL;
    freen_array(NULL, 7);
    freen_array(tab, -7);
}
Test(freen_array, test_freen_arrayy, .init=redirect, .timeout=1)
{
    char **tab = malloc(sizeof(char *) * 3);
    tab[0] = malloc(sizeof(char) * 10);
    tab[1] = malloc(sizeof(char) * 10);
    tab[2] = NULL;
    freen_array(tab, 3);
}
Test(freen_array, test_freen_arayy, .init=redirect, .timeout=1)
{
    char **tab = malloc(sizeof(char *) * 3);
    tab[0] = malloc(sizeof(char) * 10);
    tab[1] = malloc(sizeof(char) * 10);
    tab[2] = NULL;
    freen_array(tab, 1);
}