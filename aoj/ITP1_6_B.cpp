#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  bool k[4][13] = {};
	int n;
	cin >> n;
	REP(i,n){
		char c;
		int x;
		cin >> c >> x;
		if(c=='S'){
			k[0][x-1]=true;
		}
		else if(c=='H') {
			k[1][x-1]=true;
		}
		else if (c=='C') {
			k[2][x-1]=true;
		}
		else if (c=='D') {
			k[3][x-1]=true;
		}
	}
	
	REP(i,13){
		if(k[0][i]==false){
			cout << "S " << i+1 << endl;
		}
	}	
	REP(i,13){
		if(k[1][i]==false){
			cout << "H " << i+1 << endl;
		}
	}
	REP(i,13){
		if(k[2][i]==false){
			cout << "C " << i+1 << endl;
		}
	}
	REP(i,13){
		if(k[3][i]==false){
			cout << "D " << i+1 << endl;
		}
	}

  return 0;
}
