#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  string s;
	int q;
	cin >> s >> q;
	REP(i,q){
		string o,p;
		int a,b;
		cin >> o >> a >> b;
		if(o=="print"){
			cout << s.substr(a, b-a+1) << endl;
		}
		else if (o=="reverse") {			
			reverse(s.begin()+a, s.begin()+b+1);
		}
		else {
			cin >> p;
			s = s.substr(0,a) + p + s.substr(b+1);
		}
	}
  return 0;
}
