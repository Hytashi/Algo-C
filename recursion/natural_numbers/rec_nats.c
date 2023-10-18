#include <stdbool.h>
#include "rec_nats.h"

unsigned int sum(unsigned int x, unsigned int y) {
  if (x == 0) {
    return y;
  }
  return sum(x - 1, y + 1);
}

unsigned int dist(unsigned int x, unsigned int y) {
  if (x == 0) {
    return y;
  }
  if (y == 0) {
    return x;
  }
  return dist(x - 1, y - 1);
}

unsigned int min(unsigned int x, unsigned int y) {
  if (x == 0 || y == 0) {
    return 0;
  }
  return 1 + min(x - 1, y - 1);
}

unsigned int max(unsigned int x, unsigned int y) {
  if (x == 0) {
    return y;
  }
  if (y == 0) {
    return x;
  }
  return 1 + max(x - 1, y - 1);
}

bool is_eq(unsigned int x, unsigned int y) {
  if (x == 0) {
    return y == 0;
  }
  if (y == 0) {
    return false;
  }
  return is_eq(x - 1, y - 1);
}

bool is_neq(unsigned int x, unsigned int y) {
  if (x == 0) {
    return y != 0;
  }
  if (y == 0) {
    return true;
  }
  return is_neq(x - 1, y - 1);
}

bool is_leq(unsigned int x, unsigned int y) {
  if (x == 0) {
    return true;
  }
  if (y == 0) {
    return false;
  }
  return is_leq(x - 1, y - 1);
}

bool is_lth(unsigned int x, unsigned int y) {
  if (x == 0) {
    return y != 0;
  }
  if (y == 0) {
    return false;
  }
  return is_lth(x - 1, y - 1);
}

bool is_geq(unsigned int x, unsigned int y) {
  if (y == 0) {
    return true;
  }
  if (x == 0) {
    return false;
  }
  return is_geq(x - 1, y - 1);
}

bool is_gth(unsigned int x, unsigned int y) {
  if (y == 1) {
    return x != 0;
  }
  if (x == 0) {
    return false;
  }
  return is_gth(x - 1, y - 1);
}