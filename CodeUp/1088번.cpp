#include <iostream>

int main() {

  int a, i;

  scanf("%d", &a);

  for(i=1; i<=a; i++)
    {
      if(i%3==0)
        continue;
      printf("%d ", i);
    }
  
  return 0;
}
