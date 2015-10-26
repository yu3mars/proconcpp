#include <stdio.h>

int main(){
  int n,q,ans;
  ans =0;
  scanf("%d",&n);
  int s[100] = {0};
  for(int i=0;i<n;i++)
    {
      scanf("%d",&s[i]);
    }
  
  scanf("%d",&q);
  int t[100] = {0};
  for(int i=0;i<q;i++)
    {
      scanf("%d",&t[i]);
    }
    
  for(int i=0;i<q;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(t[i]==s[j])
	    {
	      ans++;
	      break;
	    }
	}
    }
  printf("%d\n",ans);
  return 0;
}
