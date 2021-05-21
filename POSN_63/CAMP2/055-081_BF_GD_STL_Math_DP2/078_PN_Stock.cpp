#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int L[mxN], R[mxN], a[mxN];
void query() {
	int n,mn=2e9,mx=-2e9;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		cin >> a[i];
		mn=min(a[i] ,mn);
		L[i]=max(a[i]-mn, L[i-1]);
	}
	for(int i=n; i>=1; --i) {
		mx=max(a[i], mx);
		R[i] = max(R[i+1], mx-a[i]);
	}
	mx=-1;
	for(int i=1; i<n; ++i) {
		mx = max(mx, L[i]+R[i+1]);
	}
	cout << mx << "\n";
	memset(L, 0, sizeof(L));
	memset(R, 0, sizeof(R));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

