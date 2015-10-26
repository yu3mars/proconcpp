#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
  int x,y;
	for (;;) {
		cin >> x >> y;
		if(x==0&&y==0) break;
		if(x>y) swap(x,y);
		cout << x << " " << y << endl;
	}
  return 0;
}
