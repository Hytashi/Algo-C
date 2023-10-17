#include <stddef.h>

//  str_cpy: Copies the character string pointed to by src (including the
//    null-terminating character) into the array starting at the address dest.
extern char *str_cpy(char *dest, char *src);

//  str_ncpy: Copies at most n successive characters (without exceeding the 
//    null-terminating character) from the string pointed to by src into the 
//    array starting at the address dest. If the null character marking the end 
//    of src has not been copied, the null character is appended to the end of 
//    the copied part.
extern char *str_ncpy(char *dest, char *src, size_t n);

//  str_cat: Appends a copy of the string pointed to by src (including the 
//    null-terminating character) to the end of the string pointed to by dest. 
//    The first character of src overwrites the null character marking the end 
//    of dest.
extern char *str_cat(char *dest, char *src);

//  str_ncat: Appends at most n successive characters (without exceeding the
//    null-terminating character) from the string pointed to by src to the end 
//    of the string pointed to by dest. The first character of src overwrites 
//    the null-terminating character that marks the end of dest.
//    If the null-terminating character from src is not copied, it is added to 
//    the end of the copied part.
extern char *str_ncat(char *dest, char *src, size_t n);

//  str_llcp: Returns the length of the longest common prefix of the strings
//    pointed to by s1 and s2.
extern size_t str_llcp(const char *s1, const char *s2);

//  str_prefcmp: Returns an integer strictly less than, equal to or strictly
//    greater than zero, depending on whether the character string pointed to by
//    s1 is a own prefix of, is equal to or is not a prefix of that pointed to
//    by s2.
extern int str_prefcmp(const char *s1, const char *s2);

//  str_npbrk: Search for the n-th occurrence in the string pointed to by s1 of 
//    any character appearing in the character string pointed to by s2.
//    Returns NULL if n is zero or if such an occurrence cannot be found. 
//    Otherwise, returns the address of the occurrence.
extern char *str_npbrk(const char *s1, const char *s2, size_t n);

//  str_rpbrk: Search for the last occurrence in the string pointed to by s1 of 
//    any character appearing in the character string pointed to by s2. 
//    Returns NULL if no character from s2 appears in s1. Otherwise, returns the 
//    address of the occurrence.
extern char *str_rpbrk(const char *s1, const char *s2);