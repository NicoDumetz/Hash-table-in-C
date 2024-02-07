/*
** EPITECH PROJECT, 2024
** ht dump
** File description:
** disp hashtable
*/

#include "../include/hashtable.h"
#include "../include/my.h"

static void disp_linked(hashtable_t *ht, int i)
{
    hashtable_t *disp = &ht[i];

    for (int index = 0; disp->hash_data != -1; index++) {
        my_printf("> %d - %s\n", disp->hash_data, disp->value);
        disp = disp->next;
    }
}

void ht_dump(hashtable_t *ht)
{
    for (int i = 0; ht[i].hash_data != -1000; i++) {
        my_printf("[%d]:\n", i);
        disp_linked(ht, i);
    }
}