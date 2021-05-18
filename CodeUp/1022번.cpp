#include <iostream>

int main() {
  char n[2001];

  fgets(n, 2000, stdin);
  printf("%s", n);
  return 0;
}
