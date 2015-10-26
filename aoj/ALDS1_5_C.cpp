#include <bits/stdc++.h>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#define inf INT_MAX/3
#define INF INT_MAX/3
#define PB push_back
#define pb push_back
#define MP make_pair
#define mp make_pair
#define ALL(a) (a).begin(),(a).end()
#define all(a) (a).begin(),(a).end()
#define SET(a,c) memset(a,c,sizeof a)
#define CLR(a) memset(a,0,sizeof a)
#define PII pair<int,int>
#define pii pair<int,int>
#define pcc pair<char,char>
#define pic pair<int,char>
#define pci pair<char,int>
#define VS vector<string>
#define VI vector<int>
#define debug(x) cout<<#x<<": "<<x<<endl
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)
#define pi 2*acos(0.0)
#define INFILE() freopen("in0.txt","r",stdin)
#define OUTFILE()freopen("out0.txt","w",stdout)
#define in scanf
#define out printf
#define LL long long
#define ll long long
#define ULL unsigned long long
#define ull unsigned long long
#define eps 1e-14
#define FST first
#define SEC second

using namespace std;

struct Point{double x,y;};

void print(Point p){
	cout << fixed << setprecision(8) << p.x << " " << p.y << endl;
}

void koch(int n,Point a,Point b){
	if(n==0)return;
	Point s,t,u;
	double th = pi/3;

	s.x=(2*a.x+b.x)/3;	
	s.y=(2*a.y+b.y)/3;
	t.x=(a.x+2*b.x)/3;	
	t.y=(a.y+2*b.y)/3;
	u.x=s.x+(t.x-s.x)*cos(th)-(t.y-s.y)*sin(th);
	u.y=s.y+(t.x-s.x)*sin(th)+(t.y-s.y)*cos(th);

	koch(n-1,a,s);
	print(s);
	koch(n-1,s,u);
	print(u);
	koch(n-1,u,t);
	print(t);
	koch(n-1,t,b);
}

int main() {
  Point a,b;
	int n;

	cin >> n;
	a.x=0;
	a.y=0;
	b.x=100;
	b.y=0;

	print(a);
	koch(n,a,b);
	print(b);

  return 0;
}
