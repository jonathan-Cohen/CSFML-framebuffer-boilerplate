/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** framebuffer_buffer
*/

#include "boilerplate.h"

int init_buffer(fbf_t *fbf, int height, int width)
{
    fbf->buffer.size = (sfVector2u){width, height};
    fbf->buffer.pixels = malloc(sizeof(sfUint8) * (width * height) * 4);
    fbf->buffer.sprite = sfSprite_create();
    fbf->buffer.texture = sfTexture_create(width, height);
    if (!fbf->buffer.pixels || !fbf->buffer.sprite || !fbf->buffer.texture)
        return (1);
    buffer_restore(&fbf->buffer);
    // sfSprite_setPosition();
    return (0);
}

void buffer_display(bf_t *buffer, sfRenderWindow *w)
{
    sfTexture_updateFromPixels(buffer->texture, buffer->pixels,
    buffer->size.x, buffer->size.y, 0, 0);
    sfSprite_setTexture(buffer->sprite, buffer->texture, sfFalse);
    sfRenderWindow_drawSprite(w, buffer->sprite, NULL);
    buffer_restore(buffer);
}

void destroy_buffer(bf_t *buffer)
{
    sfSprite_destroy(buffer->sprite);
    sfTexture_destroy(buffer->texture);
    free(buffer->pixels);
}