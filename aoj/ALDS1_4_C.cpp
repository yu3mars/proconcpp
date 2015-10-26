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

#define M 1046527
#define NIL (-1)
#define L 14

using namespace std;

char H[M][L];

int getChar(char ch){
	if(ch=='A') return 1;
	else if(ch=='T') return 2;
	else if(ch=='G') return 3;
	else if(ch=='C') return 4;
	else return 0;
}

ll getKey(char str[]){
	ll sum=0,p=1,i;
	for(i=0;i<strlen(str);i++){
		sum += p*getChar(str[i]);
		p*=5;
	}
	return sum;
}

int h1(int key){
	return key%M;
}

int h2(int key){
	return 1+(key%(M-1));
}

int find(char str[]){
	ll key,h,i;
	key=getKey(str);
	for(i=0;;i++){
		h=(h1(key)+i*h2(key)) % M;
		if(strcmp(H[h],str)==0) return 1;
		else if(strlen(H[h])==0) return 0;
	}
	return 0;
}

int insert(char str[]){
	ll key,i,h;
	key=getKey(str);
	for(i=0;;i++){
		h = (h1(key)+i*h2(key)) % M;
		if(strcmp(H[h],str)==0) return 1;
		else if (strlen(H[h])==0) {
			strcpy(H[h],str);
			return 0;
		}
	}
	return 0;
}

int main() {
  int n;
	char str[L],com[9];
	REP(i,M) H[i][0] = '\0';
	scanf("%d",&n);
	REP(i,n){
		scanf("%s %s",com,str);
		if(com[0]=='i'){
			insert(str);
		}
		else{
			if(find(str)){
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
	}

  return 0;
}
