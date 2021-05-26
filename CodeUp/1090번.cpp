#include <iostream>

int main() {

  int a, r, n, i;
  long long int sum;

  scanf("%d %d %d", &a, &r, &n);
  sum = a;
  for(i=1; i<n; i++)
    {
      sum=sum*r;
    }
  printf("%lld", sum);
  
  return 0;
}
