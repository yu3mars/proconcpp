#include <bits/stdc++.h>
using namespace std;

int main(){
  for(;;)
    {
      string s;
      int ans = 0;
      cin >> s;
      if(s=="0") return 0;
      for(int i=0;i<s.length();i++)
	{
	  ans += s[i] - '0';
	}
      cout << ans << endl;
    }
  return 0;
}
