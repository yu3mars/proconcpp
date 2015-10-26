#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
  double r;
	cin >> r;
	double s,h;
	s = r*r*M_PI;
  h = 2*r*M_PI;
	cout << fixed << setprecision(10);
	cout << s << " " << h << endl;
	return 0;
}
