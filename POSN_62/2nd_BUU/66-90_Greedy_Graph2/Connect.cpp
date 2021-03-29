#include<bits/stdc++.h>
using namespace std;

using db=double;
const int mxN = 1001;
bool mark[mxN][mxN];
struct A {
	int v;
	db w;
	bool operator < (const A& o) const {
		return w > o.w;
	}
};
pair<db,db> a[mxN];
priority_queue<A> pq;
db dis[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	db d;
	cin >> n >> m >> d;
	for(int i=1; i<=n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	for(int i=0; i<m; i++) {
		int u,v;
		cin >> u >> v;
		mark[u][v] = 1;
		mark[v][u] = 1;
	}
	memset(dis, 0x3f, sizeof(dis));
	dis[1] = 0;
	pq.push({1,0});
	while(!pq.empty()) {
		int u = pq.top().v;
		pq.pop();
		for(int i=1; i<=n; i++) {
			if(i == u) continue;
			db w=sqrt((a[i].first-a[u].first)*(a[i].first-a[u].first)+(a[i].second-a[u].second)*(a[i].second-a[u].second));
			if(mark[i][u]) {
				if(dis[i] > dis[u]) {
					dis[i] = dis[u];
					pq.push({i, dis[i]});
				}
				continue;
			}
			if(w > d) continue;
			if(dis[i] > dis[u] + w) {
				dis[i] = dis[u]+w;
				pq.push({i, dis[i]});
			}
		}
	}
	cout << (dis[n]==1<<23?-1:(int)(dis[n]*1000)) << "\n";
	return 0;
}
