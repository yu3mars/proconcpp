#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  for (;;) {
		int m,f,r;
		char g;
		cin >> m>>f>>r;
		if(m==-1 && f==-1 && r==-1) break;
		if(m==-1 || f==-1) g='F';
		else if (m+f>=80) g='A';
		else if (m+f>=65) g='B';
		else if (m+f>=50) g='C';
		else if (m+f>=30 && r>=50) g='C';
		else if (m+f>=30) g='D';
		else g='F';
		cout << g << endl;
	}
  return 0;
}
