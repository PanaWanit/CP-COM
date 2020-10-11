/*
	Task: ski
	Author: Pana Wanit
	Lang: C++17
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int l,m;
void solve(){
	bool ch=0;
	int now = l;
	for(int i=l*2;i--;){
		bool opr;
		cin >> opr;
		if(opr == 0) now--;
		else now++;
		if(now > 2*l || now <= 0) ch=1;
	}
	cout << (ch?0:1) << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q;
	for(cin >> l >> m >> q; q--;) solve();
	return 0;
}
