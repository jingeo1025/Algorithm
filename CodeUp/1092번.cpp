#include <iostream>

int main() {

  int a, b, c, s=1;
  
  scanf("%d %d %d", &a, &b, &c);
  while(s%a!=0||s%b!=0||s%c!=0) s++;
  printf("%d", s);
  
  return 0;
}
