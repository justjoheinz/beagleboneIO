/** @file beaglepair.h
 */
#ifndef _PAIR_H
#define _PAIR_H

/** @brief A structure for key/value pairs.
 *
 */
typedef struct {
  /** the key. */
  char* key; 
  /** the value. */
  char* value;
} Pair;

extern void printPair(const Pair *);
extern const Pair *get_pair_with_key(const Pair*, int, const char*);
#endif
