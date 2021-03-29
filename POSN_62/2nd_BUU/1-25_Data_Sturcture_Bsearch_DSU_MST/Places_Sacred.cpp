#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 2e5+1;
int p[mxN];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
pair<int,pair<int,int>> a[(int)(1e6)];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	iota(p+1, p+1+n, 1); // for(int i=1; i<=n; i++) p[i]=i
	for(int i=0; i<m; i++) {
		cin >> a[i].second.first >> a[i].second.second >> a[i].first;
		--a[i].first;
	}
	sort(a, a+m, greater<pair<int,pair<int,int>>>());
	ll ans=0;
	for(int i=0; i<m; i++) {
		int u = fr(a[i].second.first), v = fr(a[i].second.second);
		if(u!=v) {
			p[u]=v;
			ans+=(ll)a[i].first;
		}
	}
	cout << ans << "\n";
	return 0;
}
