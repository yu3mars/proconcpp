#include <bits/stdc++.h>
using namespace std;

int main(){
  for(;;)
    {
      char ch;
      scanf("%c", &ch);
      if(islower(ch)) ch=toupper(ch);
      else if(isupper(ch)) ch=tolower(ch);
      printf("%c",ch);
      if(ch =='\n') break;
    }
  return 0;
}
