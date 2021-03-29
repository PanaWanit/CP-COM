#include<bits/stdc++.h>
using namespace std;
#define ar array
#define vt vector
const int mxN = 100, di[] = {0, 0, 1, -1}, dj[] = {1, -1, 0, 0};
int a[mxN][mxN], d[2][mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,si,sj,ei,ej,hour,minute;
	cin >> n >> m >> si >> sj >> ei >> ej;
	scanf("%d:%d", &hour, &minute);
	--si, --sj, --ei, --ej;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> a[i][j];
	priority_queue<pair<int, ar<int,3>>, vt<pair<int,ar<int,3>>>, greater<pair<int,ar<int,3>>>> pq;
	pq.emplace(a[si][sj], ar<int,3>{si, sj, 0});
	memset(d, 0x3f, sizeof(d));
	d[0][si][sj] = a[si][sj];
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		for(int i=0; i<4; i++) {
			int ii = u[0] + di[i], jj = u[1] + dj[i];
			if(ii >= n || jj >=m || ii < 0 || jj < 0) continue;
			if(a[ii][jj] < 0 && !u[2] && d[1][ii][jj] > p.first+a[ii][jj]) {
				d[1][ii][jj] = p.first + a[ii][jj];
				pq.emplace(d[1][ii][jj], ar<int,3>{ii, jj, 1});
			}
			if(d[u[2]][ii][jj] > p.first + abs(a[ii][jj])) {
				d[u[2]][ii][jj] = p.first + abs(a[ii][jj]);
				pq.emplace(d[u[2]][ii][jj], ar<int,3>{ii, jj, u[2]});
			}
		}
	}
	minute += min(d[0][ei][ej], d[1][ei][ej]);
	cout << setw(2) << setfill('0') << ((hour+minute/60+(minute<0?-1:0)+12)%12) << ":";
	cout << setw(2) << setfill('0') << (minute%60+60)%60 << "\n";
	return 0;
}
