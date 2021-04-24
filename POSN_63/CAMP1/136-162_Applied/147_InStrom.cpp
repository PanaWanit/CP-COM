#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6+10;
int a[mxN], dpl[mxN], dpr[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,mx=-1;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		cin >> a[i];
		mx = max(a[i], mx);
		dpr[i]=mx;
	}mx=-1;
	for(int i=n; i>=1; --i) {
		mx=max(a[i], mx);
		dpl[i]=mx;
	}
	for(int i=1; i<n; ++i) {
		cout << min(dpr[i], dpl[i+1]) << " ";
	}
	cout << "\n";
	return 0;
}

