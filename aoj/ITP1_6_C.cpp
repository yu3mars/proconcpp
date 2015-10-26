#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
	int d[4][3][10] ={};
	int n;
	cin >> n;
	REP(i,n){
		int b,f,r,v;
		cin >>b>>f>>r>>v;
		d[b-1][f-1][r-1]+=v;
	}
	REP(i,4){
		if(i>0) cout << "####################" << endl;
		REP(j,3){
			REP(k,10){
				cout << " " << d[i][j][k];
			}
			cout << endl;
		}
	}
  return 0;
}
