#include <iostream>

int main() {

  char a;

  scanf("%s", &a);

  switch(a)
    {
      case'A':
      printf("best!!!");
      break;
      case'B':
      printf("good!!");
      break;
      case'C':
      printf("run!");
      break;
      case'D':
      printf("slowly~");
      break;
      default:
      printf("what?");
    }
  
  return 0;
}
