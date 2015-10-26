#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[100] = {0};
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[n-1-i]);
    }
  for(int i=0;i<n;i++)
    {
      printf("%d",a[i]);
      if(i<n-1) printf(" ");
      else printf("\n");
    }
  return 0;
}
