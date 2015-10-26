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

int main() {
	int n,x;
	char com[20];
	list<int> v;
	scanf("%d",&n);
	REP(j,n){
		scanf("%s",com);
		if(com[0]=='i'){
			scanf("%d",&x);
			v.push_front(x);
		}
		else if(com[6]=='L'){
			v.pop_back();
		}
		else if(com[6]=='F'){
			v.pop_front();
		}
		else if(com[0]=='d'){
			scanf("%d",&x);
			for(list<int>::iterator it = v.begin();it!=v.end();it++){
				if(*it == x){
					v.erase(it);
					break;
				}
			}
		}
	}
	int i=0;
	for(list<int>::iterator it = v.begin();it!=v.end();it++){
		if(i++) printf(" ");
		printf("%d",*it);
	}
	printf("\n");
  return 0;
}
