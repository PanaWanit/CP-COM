#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int a[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q,sum=0;
	cin >> n >> q;
	for(int i=1,x; i<=n; ++i) {
		cin >> x;
		sum^=x;
		a[i]=sum;
	}
	while(q--) {
		int l,r;
		cin >> l >> r;
		cout << (a[r]^a[l-1]) << "\n";
	}
	return 0;
}

