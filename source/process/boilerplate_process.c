/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** framebuffer_process
*/

#include "boilerplate.h"

static int init_all(root_t *ga, int argc, char **argv)
{
    if (init_window(&ga->cw, HEIGHT, WIDTH))
        return (1);
    if (init_framebuffer(&ga->fbf, HEIGHT, WIDTH))
        return (1);
    return (0);
}

static void destroy_all(root_t *ga)
{
    destroy_window(&ga->cw);
    framebuffer_destroy(&ga->fbf);
    free(ga);
}

static int process_root(root_t *ga)
{
    while (sfRenderWindow_isOpen(ga->cw.window)) {
        time_event_handling(&ga->cw);
        sfRenderWindow_clear(ga->cw.window, sfBlack);
        framebuffer_display(ga);
        sfRenderWindow_display(ga->cw.window);
    }
    return (0);
}

int framebuffer_process(int argc, char **argv)
{
    root_t *ga = malloc(sizeof(root_t));

    if (!ga || init_all(ga, argc, argv))
        return (84);
    if (process_root(ga)) {
        destroy_all(ga);
        return (84);
    }
    destroy_all(ga);
    return (0);
}