#include <iostream>

int main() {

  int n, i, t;
  int a[10000]={};
  scanf("%d", &n);
  for(i=1; i<=n; i++)
    {
      scanf("%d", &a[i]);
    }
  for(i=n; i>=1; i--)
    {
      printf("%d ", a[i]);
    }
  
  return 0;
}
