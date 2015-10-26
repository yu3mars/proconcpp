#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  int n,minv,maxv = -1e8;
	ll sum=0;

	minv = 1e8;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		minv = min(a,minv);
		maxv = max(a,maxv);
		sum += a;
	}
	cout << minv << " " << maxv << " " << sum << endl;
  return 0;
}
