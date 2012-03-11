#ifndef _PAIR_H
#define _PAIR_H

#include <string.h>
#include <stdio.h>

typedef struct {
  char* key;
  char* value;
} Pair;

extern void printPair(Pair *);
extern Pair *get_pair_with_key(Pair*, int, char*);
#endif
