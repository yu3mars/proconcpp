#include <stdio.h>

void swap(int &a,int &b)
{
  if(a>b)
    {
      int tmp = a;
      a=b;
      b=tmp;
    }
}

int main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  swap(a,b);
  swap(b,c);
  swap(a,b);
  printf("%d %d %d\n",a,b,c);
  return 0;
}
