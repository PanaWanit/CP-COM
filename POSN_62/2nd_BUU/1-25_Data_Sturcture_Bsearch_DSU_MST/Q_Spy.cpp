#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e3;
int p[mxN+1];
int fr(int i) {
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
vector<pair<ll,pair<int,int>>> a;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	iota(p,p+n+1,0); //for(int i=0; i<=n; i++) p[i]=i
	for(int i=0; i<n; i++) {
		p[i] = i;
		for(int j=0,x; j<n; j++) {
			cin >> x;
			if(j < i)
				a.emplace_back(x,make_pair(i,j));
		}
	}
	for(int i=0; i<n; i++) {
		ll x;
		cin >> x;
		a.emplace_back(x,make_pair(i,n));
	}
	sort(a.begin(), a.end()); 
	ll ans=0;
	for(auto& x : a) {
		int u = fr(x.second.first), v = fr(x.second.second);
		if(u!=v) {
			p[u] = v;
			ans += x.first;
		}
	}
	cout << ans << "\n";
	return 0;
}
