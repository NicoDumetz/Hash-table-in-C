/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-nicolas.dumetz
** File description:
** ht_delete.c
*/

#include "../include/hashtable.h"

static unsigned int hashtable_size(hashtable_t *ht)
{
    unsigned int i;

    for (i = 0; ht[i].hash_data != -1000; i++);
    return i;
}

int ht_delete(hashtable_t *ht, char *key)
{
    unsigned int size = hashtable_size(ht);
    int steak;
    unsigned int modulo;
    hashtable_t *previous;

    if (size == 0)
        return 84;
    steak = ht[0].hash(key, size);
    modulo = steak % size;
    previous = &ht[modulo];
    for (hashtable_t *act = ht[modulo].next; act; act = act->next) {
        if (act->hash_data == steak) {
            previous->next = act->next;
            free(act->value);
            free(act);
            return 0;
        }
        previous = act;
    }
    return 84;
}
