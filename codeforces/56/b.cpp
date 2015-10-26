#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
  int n;
  cin >> n;
  int ls[n] = {0};
  REP(i,n)
    {
      cin >> ls[i];
    }
  int rev = 0;
  int revbgn = 0;
  int revend = 0;
  if (ls[0] != 1)
    {
      rev =1;
      revend = ls[0];
    }
  for(int i=1;i<n;i++)
    {
      if(rev==1)
	{
	  if(ls[i]-ls[i-1] !=-1)
	    {
	      rev++;
	      revbgn = ls[i-1];
	    }
	}
      else
	{
	  if(ls[i]-ls[i-1] !=1)
	    {
	      rev++;
	      revend = ls[i];
	    }
	}
      
    }
  if(rev==0 || rev>2)
    {
      cout << "0 0" << endl;
    }
  else
    {
      if(revbgn == 0) revbgn = ls[n-1];
      cout << revbgn << " " << revend << endl;
    }
  return 0;
}
