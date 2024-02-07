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
    int index = hasher % len_array_hashtable(ht);
    hashtable_t *disp = &ht[index];

    for (int index = 0; disp->hash_data != -1; index++) {
        if (hasher == disp->hash_data)
            return disp->value;
        disp = disp->next;
    }
    return NULL;
}
