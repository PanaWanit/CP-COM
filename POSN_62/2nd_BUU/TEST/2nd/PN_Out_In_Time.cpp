#include<bits/stdc++.h>
using namespace std;

string a[30];
const int di[] = {0, 0, 1, -1} , dj[] = {1, -1, 0, 0};
int d[30][30];
void solve() {
	int r,c,t,si,sj,ei,ej;
	cin >> r >> c >> t;
	for(int i=0; i<r; i++)
		cin >> a[i];
	cin >> si >> sj >> ei >> ej;
	--si, --sj, --ei, --ej;
	queue<pair<int,int>> qu;
	memset(d,-1,sizeof(d));
	d[si][sj] = 0;
	qu.emplace(si, sj);
	while(!qu.empty()) {
		auto p = qu.front();
		int ni = p.first , nj = p.second;
		qu.pop();
		for(int i=0; i<4; i++) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii >= r || jj >= c || ii <0 || jj <0) continue;
			if(d[ii][jj] != -1 || a[ii][jj] == '#') continue;
			d[ii][jj] = d[ni][nj] + 1;
			qu.emplace(ii, jj);
		}
	}
	if(d[ei][ej] > t) {
		cout << "-1\n";
		return;
	}
	int cnt = 0;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			if(d[i][j] != -1) cnt++;
		}
	}
	if((cnt-d[ei][ej]-1)*2 <= t-d[ei][ej]) cout << cnt << "\n"; // t-d[ei][ej] = energy left , cnt-d[ei][ej]-1 = block left
	else cout << (d[ei][ej]+1+(t-d[ei][ej])/2) << "\n";
	//d[ei][ej]+1 = number of block in shortest path
	// |_ (t-d[ei][ej])/2 _| number of block you can walk
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
