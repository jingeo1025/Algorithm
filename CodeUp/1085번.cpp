#include <iostream>

int main() {

  double h, b, c, s;
  float x;

  scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
  x = h*b*c*s/8;
  printf("%.1f MB", x/1024/1024);
  
  return 0;
}
