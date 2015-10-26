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
	  string s;
		int m;
		cin >> s;
		if(s =="-") break;
		cin	>> m;
		REP(i,m){
			int h;
			cin >> h;
			string left = s.substr(0, h);
			string right = s.substr(h, s.length());
			s = right + left;
		}
		cout << s << endl;
	}
  return 0;
}
