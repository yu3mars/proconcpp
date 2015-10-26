#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  for(;;)
	{
		int h,w;
		cin >> h>>w;
		if(h==0 && w ==0) break;
		REP(i,h)
		{
			REP(j,w)
			{
				if((i+j)%2==0){
					cout << "#";
				}
				else {
					cout << ".";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
  return 0;
}
