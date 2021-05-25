#include <iostream>

int main() {

  double w, h, b;
  float x;

  scanf("%lf %lf %lf", &w, &h, &b);
  x = w*h*b /8;
  printf("%.2f MB", x/1024/1024);
  
  return 0;
}
