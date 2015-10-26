#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
  int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if (x>=r && y>= r && x+r<=w && y+r<=h) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
  return 0;
}
