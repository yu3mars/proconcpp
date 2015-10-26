#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  double a,b,c,d;
	cin >> a>>b>>c>>d;
	cout << fixed << setprecision(8) << sqrt(pow(a-c,2) + pow(b-d,2)) << endl;
  return 0;
}
