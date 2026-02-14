#include <stdio.h>
#include <math.h>
 int main(){
  int x, y, z, t;
  scanf("%d %d %d %d", &x, &y, &z, &t);
  double khoangcach= sqrt(pow(z-x, 2) + pow(t-y, 2));
  printf("%.2lf", khoangcach);
  return 0;
 	
 }
