//  rec_nats: a module containing recursive implementations of common functions 
//    on natural numbers (positive integers).
//    Only three operations are allowed: comparison to 0, incrementation by 1
//    and decrementation by 1.

#include <stdbool.h>

//  sum: Returns the sum of x and y.
extern unsigned int sum(unsigned int x, unsigned int y);

//  dist: Returns the distance (absolute difference) between x and y.
extern unsigned int dist(unsigned int x, unsigned int y);

//  min: Returns the minimum of x and y.
extern unsigned int min(unsigned int x, unsigned int y);

//  max: Returns the maximum of x and y.
extern unsigned int max(unsigned int x, unsigned int y);

//  is_eq: Returns whether x and y are equal.
extern bool is_eq(unsigned int x, unsigned int y);

//  is_neq: Returns whether x and y are different.
extern bool is_neq(unsigned int x, unsigned int y);

//  is_leq: Returns whether x is less than or equal to y.
extern bool is_leq(unsigned int x, unsigned int y);

//  is_lth: Returns whether x is strictly less than y.
extern bool is_lth(unsigned int x, unsigned int y);

//  is_geq: Returns whether x is greater than or equal to y.
extern bool is_geq(unsigned int x, unsigned int y);

//  is_gth: Returns whether x is strictly greater than y.
extern bool is_gth(unsigned int x, unsigned int y);