#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

using namespace std;

int main() {
  int a,b;
	string op;
	for(;;)
	{
		cin >> a >> op >> b;
		if(op=="+"){
			cout << a+b << endl;
		}
		else if(op == "-") {
			cout << a-b << endl;
		}
		else if (op=="*") {
			cout << a*b << endl;
		}
		else if (op=="/") {
			cout << a/b << endl;
		}
		else break;
		}
  return 0;
}
