#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define ar array
#define FOE(x, a) for(auto& x : a)
bool umin(int& a, const int& b) {
	return a>b?a=b, 1: 0;
}
const int Range = 'z'-'A'+1;
vt<pair<int,int>> adj[Range];
int d[Range];
priority_queue<pair<int,int>, vt<pair<int,int>>, greater<pair<int,int>>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		char u,v;
		int w;
		cin >> u >>v >> w;
		adj[u-'A'].emplace_back(v-'A', w);
		adj[v-'A'].emplace_back(u-'A', w);
	}
	memset(d, 0x3f, sizeof(d));
	d[25]=0;
	pq.emplace(0, 25);
	while(!pq.empty()) {
		auto p = pq.top();
		int u = p.second;
		pq.pop();
		FOE(v, adj[u]) {
			if(d[v.first]>p.first+v.second) {
				d[v.first]=p.first+v.second;
				pq.emplace(d[v.first], v.first);
			}
		}
	}
	int mn=2e9;
	char c;
	for(int i=0; i<25; i++) {
		if(d[i] > 1e9) continue;
		if(umin(mn, d[i])) c = i+'A';
	}
	cout << c << " " << mn << "\n";
	return 0;
}
