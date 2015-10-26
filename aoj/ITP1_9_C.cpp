#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
	int n,f=0,s=0;
	cin >> n;
	REP(i,n){
		string a,b;
		cin >> a >> b;
		if(a>b){
			f+=3;
		}
		else if (a<b) {
			s+=3;
		}
		else {
			f++;
			s++;
		}
	}
	cout << f << " " << s << endl;
  return 0;
}
