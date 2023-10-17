#include <stddef.h>
#include "rec_strings.h"

char *str_cpy(char *dest, char *src) {
  *dest = *src;
  if (*src == '\0') {
    return dest;
  }
  return str_cpy(dest + 1, src + 1);
}

char *str_ncpy(char *dest, char *src, size_t n) {
  if (*src == '\0' || n <= 0) {
    *dest = '\0';
    return dest;
  }
  *dest = *src;
  return str_ncpy(dest + 1, src + 1, n - 1);
}

char *str_cat(char *dest, char *src) {
  if (*dest == '\0') {
    return str_cpy(dest, src);
  }
  return str_cat(dest + 1, src);
}

char *str_ncat(char *dest, char *src, size_t n) {
  if (*dest == '\0') {
    return str_ncpy(dest, src, n);
  }
  return str_ncat(dest + 1, src, n);
}

size_t str_llcp(const char *s1, const char *s2) {
  if (*s1 == '\0' || *s1 != *s2) {
    return 0;
  }
  return 1 + str_llcp(s1 + 1, s2 + 1);
}

int str_prefcmp(const char *s1, const char *s2) {
  if (*s1 == '\0') {
    return (*s2 == '\0' ? 0 : -1);
  }
  if (*s1 != *s2) {
    return 1;
  }
  return str_prefcmp(s1 + 1, s2 + 1);
}

char *str_npbrk(const char *s1, const char *s2, size_t n) {
  if (n == 0 || *s1 == '\0') {
    return NULL;
  }
  if (strchr(s2, *s1) != NULL) {
    if (n == 1) {
      return (char *) s1;
    }
    n--;
  }
  return str_npbrk(s1 + 1, s2, n);
}

char *str_rpbrk(const char *s1, const char *s2) {
  if (*s1 == '\0') {
    return NULL;
  }
  char *p = str_rpbrk(s1 + 1, s2);
  if (p != NULL) {
    return p;
  }
  return strchr(s2, *s1) == NULL ? NULL : (char *) s1;
}