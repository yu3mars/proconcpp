#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  int r,c;
	cin >> r >> c;
	int d[r+1][c+1];
	REP(i,r+1){
		d[i][c] =0;
	}
	REP(j,c+1){
		d[r][j] =0;
	}

	REP(i,r){
		REP(j,c){
			cin >> d[i][j];
			d[i][c]+=d[i][j];
			d[r][j]+=d[i][j];
			d[r][c]+=d[i][j];
		}
	}
	REP(i,r+1){
		REP(j,c+1){
			if(j>0) cout << " ";
			cout << d[i][j];
		}
		cout << endl;
	}
  return 0;
}
