/*
	Task: Thaco_Easy
	Author: Pana Wanit
	Lang: C++
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
#define sz(a) (int)(a).size()
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	string a,b,ans="";
	cin >> a >> b;
	int pa = sz(a)-1 , pb = sz(b)-1 , tod=0;
	while(pa >= 0 || pb >= 0 ) {
		int A = (pa<0?'0':a[pa--]) , B = (pb<0?'0':b[pb--]);
		int x = A + B - 2*'0'+tod;
		ans += (char)(x%10 + '0');
		tod = x/10;
	} if(tod) ans += (char)(tod+'0');
	for(auto it = ans.rbegin() ; it != ans.rend(); it++) cout << *it;
	return 0;
}
