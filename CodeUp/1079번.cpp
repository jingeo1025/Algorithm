#include <iostream>

int main() {

  char a;

  again:
  scanf("%c ", &a);
  printf("%c\n", a);
  if (a!='q') goto again;
  
  return 0;
}
