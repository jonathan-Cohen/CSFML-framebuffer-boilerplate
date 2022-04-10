/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "import.h"

/**************\
*    Window    *
\**************/

typedef struct cw_s
{
    sfRenderWindow *window;
    sfClock *clock;
    sfVideoMode video_mode;
    sfEvent event;
    sfTime time;
    double sec;
}cw_t;

/**************\
*    Buffer    *
\**************/

typedef struct bf_s
{
    sfVector2u size;
    sfSprite *sprite;
    sfTexture *texture;
    sfUint8 *pixels;
}bf_t;

/**************\
*    Shapes    *
\**************/

typedef struct square_s
{
    sfVector2u dim;
    sfVector2u pos;
}square_t;

/**************\
*    Groups    *
\**************/

typedef struct group_s
{
    square_t square_1;
    square_t square_2;
}group_t;

/***************\
*  Framebuffer  *
\***************/

typedef struct fbf_s
{
    bf_t buffer;
    group_t group;
}fbf_t;

/************\
*    Root    *
\************/

typedef struct root_s
{
    cw_t cw;
    fbf_t fbf;
}root_t;

#endif /* !STRUCT_H_ */