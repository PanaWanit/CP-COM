#include<bits/stdc++.h>
using namespace std;
const int mxN=301;
bool mark[mxN];
int p[mxN], num[mxN],n, mxlv=0;
vector<int> adj[mxN], ans, level[mxN];
pair<int, int> a[mxN];
void tree(int u, int lv) {
    if(mark[u]) return;
    mark[u] = 1;
	level[lv].push_back(u);
	mxlv = max(mxlv, lv);
    for(int i=u+1; i<=n; i++) {
        if(mark[i]) continue;
        if(a[u].second > a[i].first) {
            adj[u].push_back(i);
            p[i] = u;
            tree(i, lv+1);
        }
    }
}
void dfs(int u, bool ch=0) {
    for(auto& x : adj[u]) {
        if(num[x] == num[u]) ch=1, dfs(x);
    }
    if(!ch) ans.push_back(u);
}
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int m;
    cin >> n >> m;
    for(int i=1; i<=n; i++) {
        p[i] = i;
        cin >> a[i].first >> a[i].second;
    }
    for(int i=1; i<=n; i++) {
        tree(i, 1);
    }
    while(m--) {
        int x;
        cin >> x;
        ++num[x];
    }
	for(int i=mxlv-1; i>=1; i--) {
		for(auto& x : level[i]) {
			for(auto& y : adj[x])
				num[x] += num[y];
		}
	}
    for(int i=1; i<=n; i++) {
        if(p[i] != i || num[i] == 0) continue;
        dfs(i);
    }
    sort(ans.begin() , ans.end());
    cout << ans.size() << "\n";
    for(auto& x : ans)
        cout << x << " ";
    cout << "\n";
    return 0;
}
