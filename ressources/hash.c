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

   for( int i = 0; key[i]; i++) {
      res = res * a + key[i] * b;
      a = a * b;
   }
   res = res < 0 ? res * -1: res;
   return res;
}