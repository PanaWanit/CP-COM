#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5+1;
int qs[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,t;
	cin >> n >> t;
	for(int i=1; i<=n; i++) {
		cin >> qs[i];
		qs[i] += qs[i-1];
	}
	for(int i=n-1; i>=0; i--) {
		qs[i]=min(qs[i], qs[i+1]);
	}
	while(t--) {
		int x;
		cin >> x;
		cout << (upper_bound(qs+1, qs+1+n, x) - qs)-1 << "\n";
	}
	return 0;
}
