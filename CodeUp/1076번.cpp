#include <iostream>

int main() {
  char x, t='a';
  scanf("%c", &x);
  do
    {
      printf("%c ", t);
      t+=1;
    }while(t<x+1);
  
  return 0;
}
