#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
  int a,b;
	cin >> a >> b;
	string c;
	if(a<b){
		c = " < ";
	}
	else if (a>b){
		c = " > ";
	}
	else {
		c = " == ";
	}
	cout << "a" << c << "b" << endl;
  return 0;
}
