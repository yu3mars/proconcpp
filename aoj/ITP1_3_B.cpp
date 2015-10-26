#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
	int i,n;
	i=1;
  for (;;) {
		cin >> n;
		if(n == 0) break;
		cout << "Case " << i << ": " << n << endl;
		i++;
	}
  return 0;
}
