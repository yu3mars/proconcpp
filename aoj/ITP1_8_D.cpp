#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,p;
  bool ok;
  cin >> s >> p;
  s+=s;
  if(s.find(p) == string::npos)
    {
      cout << "No" << endl;
    }
  else
    {
      cout << "Yes" << endl;
    }
  return 0;
}
