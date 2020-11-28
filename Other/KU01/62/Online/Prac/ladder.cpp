#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+1;
int a[mxN];
int main() {
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n,m,now=0,x;
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	while(m--) {
		cin >> x;
		now += x;
		now += a[now];
		if(now < 0) now = 0;
		else if(now > n) now = n;
	}
	cout << now << "\n";
	return 0;
}
