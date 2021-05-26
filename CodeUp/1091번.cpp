#include <iostream>

int main() {

  int a, b, c, d, i;
  long long int sum;

  scanf("%d %d %d %d", &a, &b, &c, &d);
  sum = a;
  for(i=1; i<d; i++)
    {
      sum = sum *b +c;
    }
  printf("%lld", sum);
  
  return 0;
}
