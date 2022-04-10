/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** framebuffer_restore
*/

#include "boilerplate.h"

void buffer_restore(bf_t *buffer)
{
    for (int e = 0; e < buffer->size.x * buffer->size.y * 4; e += 4) {
        buffer->pixels[e] = 0;
        buffer->pixels[e + 1] = 0;
        buffer->pixels[e + 2] = 0;
        buffer->pixels[e + 3] = 0;
    }
}