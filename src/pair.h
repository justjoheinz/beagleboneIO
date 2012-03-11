#ifndef _PAIR_H
#define _PAIR_H

#include <string.h>
#include <stdio.h>

typedef struct {
  char* key;
  char* value;
} Pair;

extern void printPair(const Pair *);
extern Pair *get_pair_with_key(const Pair*, int, const char*);
#endif
