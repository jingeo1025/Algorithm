#include <iostream>

int main() {

  int n;
  int i=0;
  int sum = 0;

  scanf("%d", &n);
  while(sum<n)
    {
      i++;
      sum+=i;
    }
  printf("%d", i);
  
  return 0;
}
