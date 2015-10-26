#include <stdio.h>

int main(){
  int a,b,d,r;
  double f;
  scanf("%d",&a);
  scanf("%d",&b);
  d = a/b;
  r = a%b;
  f = (double)a/b;
  printf("%d %d %f\n",d,r,f);
  return 0;
}
