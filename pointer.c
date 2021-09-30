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
  *cp = 'b';
  *ip += 5;
  *lp += 5;
  printf("char: %c, int: %d, long: %ld\n\n", a, b, c);

  // 6
  unsigned int d = 341253427;
  int *uip = &d;
  char *uic = &d;

  // 7
  printf("uip: %p uip points to: %u\n", uip, *uip);
  printf("uic: %p uic points to: %c\n\n", uic, *uic);

  // 8
  printf("hex: %x, decimal: %u\n\n", d, d);

  // 9
  printf("(HEX) %hhx %hhx %hhx %hhx\n", *uic, *(uic + 1), *(uic + 2), *(uic + 3));
  printf("(DEC) %hhu %hhu %hhu %hhu\n\n", *uic, *(uic + 1), *(uic + 2), *(uic + 3));

  // 10
  *uic += 1;
  printf("hex: %x, decimal, %u\n", d, d);
  *(uic + 1) += 1;
  printf("hex: %x, decimal, %u\n", d, d);
  *(uic + 2) += 1;
  printf("hex: %x, decimal, %u\n", d, d);
  *(uic + 3) += 1;
  printf("hex: %x, decimal, %u\n", d, d);

  printf("(HEX) %hhx %hhx %hhx %hhx\n", *uic, *(uic + 1), *(uic + 2), *(uic + 3));
  printf("(DEC) %hhu %hhu %hhu %hhu\n\n", *uic, *(uic + 1), *(uic + 2), *(uic + 3));

  // 11

  *uic += 16;
  printf("hex: %x, decimal, %u\n", d, d);
  *(uic + 1) += 16;
  printf("hex: %x, decimal, %u\n", d, d);
  *(uic + 2) += 16;
  printf("hex: %x, decimal, %u\n", d, d);
  *(uic + 3) += 16;
  printf("hex: %x, decimal, %u\n", d, d);

  printf("(HEX) %hhx %hhx %hhx %hhx\n", *uic, *(uic + 1), *(uic + 2), *(uic + 3));
  printf("(DEC) %hhu %hhu %hhu %hhu\n\n", *uic, *(uic + 1), *(uic + 2), *(uic + 3));

  return 0;
}
