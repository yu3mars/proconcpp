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

struct Dice{
  int t, f, r, face[6];
  Dice(void) { t = 0; f = 1; r = 2; }
  int top() { return face[t]; }
  int bottom() { return face[5 - t]; }
  int right() { return face[r]; }
  int left() { return face[5 - r]; }
  int front() { return face[f]; }
  int back() { return face[5 - f]; }
  void toFront() { swap(f, t); t = 5 - t; }
  void toBack()  { swap(f, t); f = 5 - f; }
  void toRight() { swap(t, r); t = 5 - t; }
  void toLeft()  { swap(t, r); r = 5 - r; }
  void toClock() { swap(f, r); r = 5 - r; }
  void toConter(){ swap(f, r); f = 5 - f; }
  vector<int> toVector() {
    return {face[t], face[f], face[r], face[5-r], face[5-f], face[5-t]};
  }
  vector<int> toVector2() {
    vector<int> res = {999};
    REP(i,30) {
      if (i % 10 == 0) toRight();
      else if (i % 10 == 5) toFront();
      else toClock();
      res = min(res, toVector());
    }
    return res;
  } 
	int roll(int tt, int ff) {
    REP(i,30) {
      if (i % 10 == 0) toRight();
      else if (i % 10 == 5) toFront();
      else toClock();
      if (tt == face[t] && ff == face[f]) return face[r];
    }
    return 0;
  }
};

int main() {
  Dice d; 
	REP(i,6){
		cin >> d.face[i];
	}
	int n;
	cin >> n;
	REP(i,n){
		int a,b;
		cin >> a>>b;
		cout << d.roll(a,b) << endl;
	}
  return 0;
}
