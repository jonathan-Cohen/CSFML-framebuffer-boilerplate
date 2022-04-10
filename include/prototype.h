/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** prototype
*/

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include "struct.h"


/*************\
*   PROCESS   *
\*************/

int framebuffer_process(int argc, char **argv);


/************\
*   WINDOW   *
\************/

int init_window(cw_t *cw, int height, int width);
void time_event_handling(cw_t *cw);
void destroy_window(cw_t *cw);


/****************\
*   FRAMBUFFER   *
\****************/

int init_framebuffer(fbf_t *fbf, int height, int width);
int framebuffer_display(root_t *ga);
void framebuffer_destroy(fbf_t *fbf);

/************\
*   BUFFER   *
\************/

int init_buffer(fbf_t *fbf, int height, int width);
void buffer_display(bf_t *buffer, sfRenderWindow *w);
void destroy_buffer(bf_t *buffer);

void put_pixel(bf_t *buffer, int x, int y, sfColor color);

void buffer_restore(bf_t *buffer);

/************\
*   SHAPES   *
\************/

void put_square(bf_t *buffer, square_t square, sfColor color);

/**********\
*   group   *
\**********/

int init_group(group_t *group);
int framebuffer_group(fbf_t *fbf);
void destroy_group(group_t *group);

#endif /* !PROTOTYPE_H_ */