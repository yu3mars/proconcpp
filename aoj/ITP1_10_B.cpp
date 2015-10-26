#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12,
const ld pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

int main() {
  double a,b,c,s,l,h;
	cin >> a>>b>>c;
	c = c*pi/180;
	s = a*b*sin(c)/2;
	l =a+b+sqrt(pow(a*sin(c),2)+pow(b-a*cos(c),2));
	h = b*sin(c);
	cout <<fixed<<setprecision(8)<<s<< " "<<l<< " "<<h<<endl;
  return 0;
}
