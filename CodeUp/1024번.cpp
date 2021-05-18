#include <iostream>

int main() {
  char n[30];
  int i;

  scanf("%s", n);
  for(i=0;n[i] != '\0';i++)
  {
    printf("\'%c\'\n", n[i]);
  }
  
  return 0;
}
