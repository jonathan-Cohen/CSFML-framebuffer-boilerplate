/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** square_shape
*/

#include "boilerplate.h"

void put_square(bf_t *buffer, square_t square, sfColor color)
{
    for (int e = 0; e < square.dim.y; e++) {
        for (int j = 0; j < square.dim.x; j++) {
            put_pixel(buffer, square.pos.x + j, square.pos.y + e, color);
        }
    }
}