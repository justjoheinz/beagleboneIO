/** Utility functions.
 *
 */

#ifndef _UTIL_H
#define _UTIL_H

/** compute the index of a given pin in the pin structure.
 * @param pinStr a string, such as "P8_35"
 * @return the index inside the pin structure for this input
 */
extern unsigned compute_pin_index(const char* pinStr);

#endif /* _UTIL_H */
