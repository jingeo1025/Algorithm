#include <iostream>

int main() {

  int a, i;

  scanf("%X", &a);
  for(i=1; i<16; i++)
    {
      printf("%X*%X=%X\n", a, i, a*i);
    }
  
  return 0;
}
