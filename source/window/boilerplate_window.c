/*
** EPITECH PROJECT, 2020
** MUL_my_world_bootstrap_2019
** File description:
** display_window
*/

#include "boilerplate.h"

#include "boilerplate.h"

int init_window(cw_t *cw, int height, int width)
{
    cw->clock = sfClock_create();
    cw->video_mode = (sfVideoMode){width, height, 32};
    cw->window = sfRenderWindow_create(cw->video_mode, "FRAMBUFFER",
    sfDefaultStyle, NULL);
    if (!cw->window) return (1);
    sfRenderWindow_setFramerateLimit(cw->window, 2);
    return (0);
}

void time_event_handling(cw_t *cw)
{
    cw->time = sfClock_getElapsedTime(cw->clock);
    cw->sec = cw->time.microseconds / 1000000.0;
    while (sfRenderWindow_pollEvent(cw->window, &cw->event)) {
        if (cw->event.type == sfEvtClosed)
            sfRenderWindow_close(cw->window);
    }
}

void destroy_window(cw_t *cw)
{
    sfClock_destroy(cw->clock);
    sfRenderWindow_destroy(cw->window);
}