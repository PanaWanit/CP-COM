#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e3;
pair<double,pair<int,int>> a[(mxN*(mxN-1))/2];
int p[mxN];
int fr(int i) {
	if(i == p[i]) return i;
	return p[i] = fr(p[i]);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	double ans=0;
	cin >> n >> m;
	iota(p, p+n, 0); // for(int i=0; i<n; i++) p[i]=i;
	for(int i=0; i<m ;i++)
		cin >> a[i].second.first >> a[i].second.second >>  a[i].first;
	sort(a, a+m);
	for(int i=0; i<m; i++) {
		int u = fr(a[i].second.second), v= fr(a[i].second.first) ;
		if(u != v)
			p[u] =v, ans += a[i].first;
	}
	cout << fixed << setprecision(3) << ans << "\n";
	return 0;
}
