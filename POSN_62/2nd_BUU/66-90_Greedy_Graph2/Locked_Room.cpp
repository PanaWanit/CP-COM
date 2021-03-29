#include<bits/stdc++.h>
using namespace std;
#define ar array
#define vt vector
const int mxN = 55, di[] = {0, 0, 1, -1} , dj[] = {1, -1, 0, 0};
int a[mxN][mxN], d[2][mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,si,sj,ei,ej;
	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cin >> a[i][j];
	}
	cin >> si >> sj >> ei >> ej;
	--si, --sj, --ei, --ej;
	priority_queue<pair<int,ar<int,3>>, vt<pair<int,ar<int,3>>>, greater<pair<int,ar<int,3>>>> pq;
	memset(d, 0x3f, sizeof(d));
	d[0][si][sj] = 0;
	pq.emplace(0, ar<int,3> {si, sj, 0});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		for(int i=0; i<4; i++) {
			int ii = u[0] + di[i], jj = u[1] + dj[i];
			if(ii >= n || jj >=n || ii<0 || jj<0) continue;
			if(a[ii][jj]<0&&d[u[2]^1][ii][jj] > p.first-a[ii][jj]) {
				d[u[2]^1][ii][jj] = p.first-a[ii][jj];
				pq.emplace(d[u[2]^1][ii][jj], ar<int,3>{ii, jj, u[2]^1});
			}
			else if(a[ii][jj]>0&&d[u[2]][ii][jj] > p.first+a[ii][jj]) {
				d[u[2]][ii][jj] = p.first+a[ii][jj];
				pq.emplace(d[u[2]][ii][jj], ar<int,3>{ii, jj, u[2]});
			}
		}
	}
	cout << d[1][ei][ej] << "\n";
	return 0;
}
