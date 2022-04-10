/*
** EPITECH PROJECT, 2020
** lib
** File description:
** basics
*/

#ifndef BASICS_H_
#define BASICS_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

//put an error message on the error output and return 1
int error(char *str);
//put an error message on the error output and return -1
int errorc(char *str);
//put an error message on the error output and return 84
int errorm(char *str);
//put an error message on the error output and return null
void *errorn(char *str);

#endif /* !BASICS_H_ */