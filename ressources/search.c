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

    for (; ht[i].hash_data != -1000; i++);
    return i;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int hasher;
    int index;
    hashtable_t *disp;

    if (!ht)
        return 0;
    hasher = ht[0].hash(key, 4);
    index = hasher % len_array_hashtable(ht);
    disp = &ht[index];
    for (int index = 0; disp != NULL; index++) {
        if (hasher == disp->hash_data)
            return disp->value;
        disp = disp->next;
    }
    return NULL;
}
