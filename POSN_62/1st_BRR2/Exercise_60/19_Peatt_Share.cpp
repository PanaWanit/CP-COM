/*
 	TASK : Peatt Share
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int qs[mxN];
void solve() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> qs[i], qs[i]+=qs[i-1];
	if(qs[n]%2) {
		cout << "NO\n";
		return;
	}
	for(int i=1; i<n; i++) {
		if(qs[i] == qs[n]-qs[i]) {
			cout << i << "\n";
			return;
		}
	}
	for(int i=1; i<n; i++) {
		int B = lower_bound(qs+1, qs+n+1, qs[n]/2+qs[i-1])-qs;
		if(qs[B] - qs[i-1] == qs[n]/2) {
			cout << i-1 << " " << B << "\n";
			return ;
		}
	}
	cout << "NO\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q;
	cin >> q;
	while(q--)
		solve();
	return 0;
}
