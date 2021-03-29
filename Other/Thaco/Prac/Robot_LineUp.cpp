#include<bits/stdc++.h>
using namespace std;

const int mxN = 2e5+2;
int dpl[mxN] , dpr[mxN] , a[mxN] , b[mxN];
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=m; i++) cin >> b[i];
	sort(a+1,a+1+n) , sort(b+1,b+1+m);
	for(int i=1; i<=m; i++){
		dpl[i] = dpl[i-1] + n - (lower_bound(a+1,a+1+n,b[i]) - a) + 1;
	}
	for(int i=m; i>=1; i--) {
		dpr[i] = dpr[i+1] + (lower_bound(a+1,a+1+n,b[i])-a) -1;
	}
	int mx = -1;
	for(int i=0; i<=m; i++) mx = max(mx,dpl[i] + dpr[i+1]);
	cout << mx + m*(m-1)/2 << "\n";
	return 0;
}
