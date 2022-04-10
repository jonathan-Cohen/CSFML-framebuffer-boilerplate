/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** framebuffer_pixel
*/

#include "boilerplate.h"

void put_pixel(bf_t *buffer, int x, int y, sfColor color)
{
    int i = 4 * buffer->size.x * y + x * 4;

    if (x < buffer->size.x && x > 0 && y < buffer->size.y && y > 0) {
        buffer->pixels[i] = color.r;
        buffer->pixels[i + 1] = color.g;
        buffer->pixels[i + 2] = color.b;
        buffer->pixels[i + 3] = color.a;
    }
}