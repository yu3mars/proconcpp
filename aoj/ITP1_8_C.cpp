#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
	char c;
	int ls[26] = {};
	while (cin >> c){
		if(islower(c)){
			ls[c-'a']++;
		}
		else if (isupper(c)) {
			ls[c-'A']++;
		}
	}
	REP(i,26){
		cout << (char)('a' + i) << " : " << ls[i] << endl;
	}
  return 0;
}
