#include <iostream>

int main() {

  int a=1;

  while(a!=0)
    {
      scanf("%d ", &a);
      if(a==0) goto done;
      printf("%d\n", a);
    }
done:
  
  return 0;
}
