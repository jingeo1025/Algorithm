#include <iostream>

int main() {

  int n, i;
  int sum = 0;

  scanf("%d", &n);
  for(i=1;;i++)
    {
      sum+=i;
      if(sum>=n)
        break;
    }
  printf("%d", sum);
  
  return 0;
}
