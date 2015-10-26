#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
	int n;
	cin >> n;
	double x[n],y[n],z[n],m=0;
  REP(i,n){
		cin>>x[i];
	}
  REP(i,n){
		cin>>y[i];
		z[i]=abs(x[i]-y[i]);
		m=max(m,z[i]);
	}
	for (int i = 1; i < 4; i++) {
		double d=0;
		REP(j,n){
			d+=pow(z[j],i);
		}
		d=pow(d,(double)1/i);
		cout<<fixed<<setprecision(8)<<d<<endl;
	}
	cout<<fixed<<setprecision(8)<<m<<endl;
  return 0;
}
