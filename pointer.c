#include <stdio.h>

int main() {

  // 1
  char a = 'a';
  int b = 1;
  long c = 1234;

  // 2
  printf("(HEX) char: %p, int: %p, long: %p\n", &a, &b, &c);
  printf("(DEC) char: %lu, int: %lu, long: %lu\n\n", &a, &b, &c);

  // 3
  char *cp = &a;
  int *ip = &b;
  long *lp = &c;

  // 4
  printf("char: %p, int: %p, long: %p\n\n", cp, ip, lp);

  // 5
  // *cp = 'b';
  // *ip += 5;
  // *lp += 5;
  // printf("char: %c, int: %d, long: %ld\n\n", a, b, c);

  // 6
  unsigned int d = 10;
  int *uip = &d;
  char *uic = &d;

  // 7
  printf("uip: %p uip points to: %u\n", uip, *uip);
  printf("uic: %p uic points to: %c\n\n", uic, *uic);

  // 8
  printf("hex: %x, decimal: %u\n\n", d, d);

  return 0;
}
