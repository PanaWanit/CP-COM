#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mxN = 5e4+10;
int in[mxN];
vector<int> adj[mxN];
priority_queue<int, vector<int>, greater<int>> pq;
void query() {
	int n,m,ch=0;
	cin >> n >> m;
	while(m--) {
		int u,v;
		cin >> v >> u;
		adj[u].push_back(v);
		++in[v];
	}
	for(int i=1; i<=n; ++i)
		if(!in[i]) pq.push(i);
	int c=0, st=-1;
	vector<int> ans;
	while(!pq.empty()) {
		int u;
		if(sz(pq)>=2) {
			ch=1;
			st=c;
		}
		u=pq.top(); 
		pq.pop();
		ans.push_back(u);
		for(auto& x : adj[u]) {
			--in[x];
			if(!in[x]) pq.push(x);
		}
		++c;
	}
	if(sz(ans)!=n) {
		cout << "Never\n";
	}
	else {
		cout << (ch?"Different ":"Same ");
		if(ch) swap(a[st], a[st+1]);
		for(auto& x : ans)
			cout << x << " ";
		cout << "\n";
	}
	for(int i=1; i<=n; ++i)
		adj[i].clear();
	memset(in, 0, sizeof(in));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

