#include <iostream>

int main() {

  int n, i;
  int min;
  int a[10000]={};
  scanf("%d", &n);
  for(i=1; i<=n; i++)
    {
      scanf("%d", &a[i]);
    }
  min = a[1];
  for(i=1; i<n; i++)
    {
      if(a[i+1]<=min)
      {
        min = a[i+1];
      }
    }
  
  printf("%d", min);
  
  return 0;
}
