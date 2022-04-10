/*
** EPITECH PROJECT, 2019
** MUL_my_radar_2019
** File description:
** framebuffer
*/

#include "boilerplate.h"

int init_framebuffer(fbf_t *fbf, int height, int width)
{
    if (init_buffer(fbf, height, width))
        return (1);
    if (init_group(&fbf->group))
        return (1);
    return (0);
}

int framebuffer_display(root_t *ga)
{
    framebuffer_group(&ga->fbf);
    buffer_display(&ga->fbf.buffer, ga->cw.window);
    return (0);
}

void framebuffer_destroy(fbf_t *fbf)
{
    destroy_buffer(&fbf->buffer);
    destroy_group(&fbf->group);
}