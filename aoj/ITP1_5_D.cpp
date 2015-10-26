#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef long double ld;
// const ld eps = 1e-12, pi = acos(-1.0);
// const ll inf = 1e12;

using namespace std;

void Include3(int n, int ori){
	if(n%10==3){
		cout << " " << ori;
	}
	else if(n/10>0){
		Include3(n/10,ori);
	}
}

void CheckNum(int n){
	if(n % 3 == 0){
		cout << " " << n;
	}
	else
	{
		Include3(n,n);
	}
}

int main() {
  int n;
	cin >> n;
	REP(i,n){
		CheckNum(i+1);
	}
	cout << endl;
  return 0;
}

