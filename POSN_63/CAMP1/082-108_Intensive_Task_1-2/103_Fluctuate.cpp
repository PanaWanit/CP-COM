#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	int mn=2e9,mx=0;
	for(int i=1; i<=n; i++) {
		int x; cin >> x;
		mn=min(mn, x);
		mx = max(x-mn, mx);
	}
	cout << mx << "\n";
	return 0;
}
