#include "beaglepair.h"

#include <string.h>
#include <stdio.h>

void printPair(const Pair *p) {
    printf("key: %s, value: %s\n", p->key, p->value);
 }

char* pair_get_key(Pair p) {
  return p.key;
}

char* pair_get_value(Pair p) {
  return p.value;
}

int has_key(const Pair* pairs, int size, const char *key) {
  int i = 0;
  
  for (i = 0; i< size; i++) {
    if ((strcmp(pairs[i].key, key)) == 0) return 1;
  }
  return 0;
}

const Pair *get_pair_with_key(const Pair* pairs, int size, const char *key) {
  int i = 0;
  for (i = 0; i < size; i++) {
    if ((strcmp(pairs[i].key, key)) == 0) return &(pairs[i]);
  }
  return NULL;
}
