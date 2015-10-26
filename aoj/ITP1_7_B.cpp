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
		int n,x,c;
		cin >> n >> x;
		if(n==0&&x==0) break;
		c=0;
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <=n ; j++) {
				for (int k = j+1; k <=n; k++) {
					if(i+j+k==x){
						c++;
					}
				}
			}
		}
		cout << c << endl;
	}
  return 0;
}
