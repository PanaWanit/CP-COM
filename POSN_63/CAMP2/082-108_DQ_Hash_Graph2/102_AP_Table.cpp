#include<bits/stdc++.h>
using namespace std;
const int mxN= 35; 
const int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
struct Node {
	int i,j,w;
	bool operator < (const Node& o) const {
		return w>o.w;
	}
};
priority_queue<Node> pq;
int d[mxN][mxN][mxN][mxN],x,n,y;
char a[mxN][mxN];
void dij(int si, int sj) {
	d[si][sj][si][sj]=0;
	pq.push({si, sj, 0});
	while(!pq.empty()) {
		int ni = pq.top().i, nj = pq.top().j, w=pq.top().w;
		pq.pop();
		for(int i=0; i<4; ++i) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii>n||jj>n||ii<=0||jj<=0) continue;
			if(d[si][sj][ii][jj]>w+(a[ii][jj]==a[ni][nj]?x:y)) {
				d[si][sj][ii][jj]=w+(a[ii][jj]==a[ni][nj]?x:y);
				pq.push({ii, jj, d[si][sj][ii][jj]});
			}
		}
	}
}
void query() {
	cin >> n >> x >> y;
	for(int i=1; i<=n; ++i) {
		cin >> (a[i]+1);
	}
	memset(d, 0x3f, sizeof(d));
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			dij(i, j);
		}
	}
	int mx=0;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			for(int k=1; k<=n; ++k) {
				for(int l=1; l<=n; ++l){ 
					mx = max(mx, d[i][j][k][l]);
				}
			}
		}
	}
	cout << mx << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

