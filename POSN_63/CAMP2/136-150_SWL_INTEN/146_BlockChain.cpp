#include<bits/stdc++.h>
using namespace std;
map<vector<pair<int,int>>, int> mp;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q;
	cin >> n >> q;
	for(int i=1,sz; i<=n; ++i) {
		cin >> sz;
		vector<pair<int,int>> g;
		for(int j=1,u,v; j<sz; ++j)
			cin >> u >> v, g.emplace_back(min(u, v), max(u, v));
		sort(g.begin(), g.end());
		++mp[g];
	}
	for(int i=1,sz; i<=q; ++i) {
		cin >> sz;
		vector<pair<int,int>> g;
		for(int j=1,u,v; j<sz; ++j)
			cin >> u >> v, g.emplace_back(min(u, v), max(u, v));
		sort(g.begin(), g.end());
		cout << mp[g] << "\n";
	}
	return 0;
}

