#include "pair.h"

char* pair_get_key(Pair p) {
  return p.key;
}

char* pair_get_value(Pair p) {
  return p.value;
}

int has_key(Pair* pairs, int size, char *key) {
  int i = 0;
  
  for (i = 0; i< size; i++) {
    if ((strcmp(pairs[i].key, key)) == 0) return 1;
  }
  return 0;
}

Pair *get_pair_with_key(Pair* pairs, int size, char *key) {
  int i = 0;
  for (i = 0; i < size; i++) {
    if ((strcmp(pairs[i].key, key)) == 0) return &pairs[i];
  }
  return NULL;
}
