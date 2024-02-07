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
    if (!ht)
        return 0;
    unsigned int i;

    for (i = 0; ht[i].hash_data != -1000; i++);
    return i;
}

static int existing_hash(hashtable_t *ht, int steak, unsigned int modulo,
    char *value)
{
    for (hashtable_t *current = ht[modulo].next; current;
    current = current->next) {
        if (current->hash_data == steak) {
            free(current->value);
            current->value = my_strdup(value);
            return 1;
        }
    }
    return 0;
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
    modulo = steak % size;
    if (existing_hash(ht, steak, modulo, value))
        return 0;
    new = malloc(sizeof(hashtable_t));
    new->hash = ht[0].hash;
    new->hash_data = steak;
    new->value = my_strdup(value);
    new->next = ht[modulo].next;
    ht[modulo].next = new;
    return 0;
}
