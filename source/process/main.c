/*
** EPITECH PROJECT, 2020
** framebuffer
** File description:
** main
*/

#include "boilerplate.h"

int main(int argc, char **argv)
{
    if (argc != 1)
        return (errorm("Too many argument\n"));
    return (framebuffer_process(argc, argv));
}