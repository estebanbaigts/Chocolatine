/*
** EPITECH PROJECT, 2023
** chocolatine [WSL : Ubuntu]
** File description:
** test
*/

#include <criterion/criterion.h>

Test(test, this)
{
    int nb = 0;
    nb += 1;
    cr_assert_eq(nb, 1);
}
