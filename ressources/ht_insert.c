/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-secured-nicolas.dumetz
** File description:
** ht_insert.c
*/

#include "../include/hashtable.h"
#include "../include/my.h"

static unsigned int hashtable_size(hashtable_t *ht)
{
    unsigned int i;

    for (i = 0; ht[i].hash_data != -1000; i++);
    return i;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    unsigned int size = hashtable_size(ht);
    int steak;
    hashtable_t *new;
    unsigned int modulo;

    if (size == 0)
        return 84;
    steak = ht[0].hash(key, size);
    new = malloc(sizeof(hashtable_t));
    new->hash = ht[0].hash;
    new->hash_data = steak;
    new->value = my_strdup(value);
    modulo = steak % size;
    new->next = ht[modulo].next;
    ht[modulo].next = new;
    return 0;
}
