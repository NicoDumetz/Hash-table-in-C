/*
** EPITECH PROJECT, 2024
** hash
** File description:
** for hash word
*/
#include "../include/hashtable.h"

int hash(char *key, int len)
{
    int res = 0;
    int b = 610933081;
    int a = 620872817;

    if (key == NULL)
        return 0;
    for (int i = 0; key[i]; i++) {
        res = res * a + key[i] * b;
        a *= b;
    }
    res = res < 0 ? res * - 1 : res;
    return res;
}

void delete_hashtable(hashtable_t *ht)
{
    hashtable_t *current;
    hashtable_t *temp;
    int len;

    if (!ht)
        return;
    len = len_array_hashtable(ht);
    for (int i = 0; i < len; i++) {
        current = ht[i].next;
        for (int i = 0; current != NULL; i++) {
            temp = current;
            current = current->next;
            free(temp->value);
            free(temp);
        }
    }
    free(ht);
}
