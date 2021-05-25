#include <iostream>

int main() {

  int i, j, k, n=0;
  int r, g, b;

  scanf("%d %d %d", &r, &g, &b);
  for(i=0; i<r; i++)
    for(j=0; j<g; j++)
      for(k=0; k<b; k++)
        {
          printf("%d %d %d\n", i, j, k);
          n++;
        }

  printf("%d", n);
  
  return 0;
}
