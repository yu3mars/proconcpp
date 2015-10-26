#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  for(;;){
		int n;
		cin>>n;
		if(n==0)break;
		double s[n], m=0,a=0;
		for (int i = 0; i < n; i++) {
			cin>>s[i];
			m+=s[i];
		}
		m/=n;
		for (int i = 0; i < n; i++) {
			a+=pow(s[i]-m,2);
		}
		a=sqrt(a/n);
		cout << fixed << setprecision(8) << a << endl;
	}
  return 0;
}
