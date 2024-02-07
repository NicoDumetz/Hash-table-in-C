/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-nicolas.dumetz
** File description:
** new_hashtable.c
*/

#include "../include/hashtable.h"
#include <stdlib.h>

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *new;
    int i;

    new = malloc(sizeof(hashtable_t) * (len + 1));
    for (i = 0; i < len; i++) {
        new[i].hash_data = -1;
        new[i].hash = hash;
    }
    new[i].hash_data = -1000;
    return new;
}
