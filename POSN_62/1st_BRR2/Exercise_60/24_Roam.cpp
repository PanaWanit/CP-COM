/*
 	TASK : Roam
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int qs[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	while(m--) {
		int l,r;
		cin >> l >> r;
		qs[l]++, qs[r+1]--;
	}
	for(int i=1; i<=n; i++) {
		qs[i] += qs[i-1];
	}
	int t;
	for(cin >> t; t--;) {
		int k;
		cin >> k;
		cout << qs[k] << "\n";
	}
	return 0;
}
