/*
** EPITECH PROJECT, 2019
** my_params_to_array.c
** File description:
** my_params_to_array
*/

#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param params[ac];
    params = malloc(sizeof(struct info_param)*ac + 1);
    
    if (params == NULL)
        return NULL;
    for (int i = 0; i <=ac; i++) {
    params[i].length = my_strlen(av[i]);
    params[i].str = av[i];
    param[i].copy = my_strdup(av[i]);
    param[i].word_array = my_str_to_word_array(av[i]);
    }
    param[ac].str = 0;
}
