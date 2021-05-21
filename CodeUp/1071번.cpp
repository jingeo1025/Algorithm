#include <iostream>

int main() {

  int a;

reload:
  scanf("%d", &a);
  if(a==0) goto done;
  printf("%d\n", a);
  if(a!=0) goto reload;
done:
  
  return 0;
}
