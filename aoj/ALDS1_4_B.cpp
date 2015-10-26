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

int s[100000],t[50000],n,q;

int binarySearch(int key){
	int left=0;
	int right=n;
	int mid;
	while(left<right){
		mid=(left+right)/2;
		if(key==s[mid]) return mid;
		else if(key>s[mid]) left=mid+1;
		else if(key<s[mid]) right=mid;
	}
	return -1;
}

int main() {
	int ans=0;
	cin >> n;
	REP(i,n){
		cin >> s[i];
	}
	cin >> q;
	REP(i,q){
		cin >> t[i];
	}
	REP(i,q){
		if(binarySearch(t[i])>=0) ans++;
	}
	cout << ans << endl;
  return 0;
}
