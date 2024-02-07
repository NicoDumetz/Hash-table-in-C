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

    if (len <= 0)
        return NULL;
    new = malloc(sizeof(hashtable_t) * (len + 1));
    if (!new)
        return 0;
    for (i = 0; i < len; i++) {
        new[i].hash_data = -1;
        new[i].hash = hash;
        new[i].next = 0;
    }
    new[i].hash_data = -1000;
    new[i].next = 0;
    return new;
}
