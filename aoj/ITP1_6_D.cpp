#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  int n,m;
	cin >> n>>m;
	int a[n][m], b[m], c[n];
	REP(i,n){
		REP(j,m){
			cin >> a[i][j];
		}
	}
	REP(i,m){
		cin >> b[i];
	}
	REP(i,n){
		c[i] = 0;
		REP(j,m){
			c[i] += a[i][j] * b[j];
		}
		cout << c[i] << endl;
	}

  return 0;
}
