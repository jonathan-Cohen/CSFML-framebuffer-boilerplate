/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** framebuffer_group
*/

#include "boilerplate.h"

int init_group(group_t *group)
{
    group->square_1 = (square_t){{100, 100}, {100, 100}};
    group->square_2 = (square_t){{200, 200}, {200, 200}};
    return (0);
}

int framebuffer_group(fbf_t *fbf)
{
    put_square(&fbf->buffer, fbf->group.square_1, sfRed);
    put_square(&fbf->buffer, fbf->group.square_2, sfBlue);
    return (0);
}

void destroy_group(group_t *group)
{
    (void)group;
}