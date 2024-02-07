/*
** EPITECH PROJECT, 2024
** search
** File description:
** search key on array
*/
#include "../include/hashtable.h"

int len_array_hashtable(hashtable_t *ht)
{
    int i = 0;

    for (i; ht[i].hash_data != -1000; i++);
    return i;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int hasher = ht[0].hash(key, 4);

    return NULL;
}