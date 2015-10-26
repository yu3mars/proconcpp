#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  ll n,m,l;
	cin >> n>> m>> l;
	ll a[n][m],b[m][l],c[n][l];
	REP(i,n){
		REP(j,m){
			cin >> a[i][j];
		}
	}
	REP(i,m){
		REP(j,l){
			cin >> b[i][j];
		}
	}
	REP(i,n){
		REP(j,l){
			c[i][j]=0;
			REP(k,m){
				c[i][j]+= a[i][k] * b[k][j];
			}
			if(j>0) cout <<" ";
			cout <<c[i][j];
		}
		cout << endl;
	}

  return 0;
}
