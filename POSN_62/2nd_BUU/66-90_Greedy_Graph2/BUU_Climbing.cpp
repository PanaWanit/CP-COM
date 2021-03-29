#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define ar array
const int mxN = 100, di[] = {0, 0, 1, -1, 1, 1, -1, -1}, dj[] = {1, -1, 0, 0, 1, -1, 1, -1};
char a[mxN][mxN];
int d[mxN][mxN];
template<class A> bool umax(A& a, const A& b) {
	return a<b?a=b,1:0;
}// return max if a<b and set a=b
priority_queue<pair<int, ar<int,2>>, vt<pair<int, ar<int,2>>>, greater<pair<int, ar<int,2>>>> pq;
int power(const int & a) {
	return a*a;
}
void solve() {
	char mxchar=0;
	int r,c,si,sj,ei,ej;
	cin >> r >> c;
	for(int i=0; i<r; i++) {
		cin >> a[i];
		for(int j=0; j<c; j++) {
			bool ch=0;
			if(isdigit(a[i][j])) ch=umax(mxchar, a[i][j]);
			if(ch) ei = i, ej = j;
		}
	}
	cin >> si >> sj;
	memset(d, 0x3f, sizeof(d));
	d[si][sj] = 0;
	pq.emplace(0, ar<int,2>{si, sj});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		for(int i=0; i<8; i++) {
			int ii = u[0] + di[i], jj = u[1] + dj[i];
			if(ii >= r || jj >=c || ii <0 || jj < 0 || !isdigit(a[ii][jj])) continue;
			int w = power(abs(a[ii][jj]-a[u[0]][u[1]])+1);
			if(d[ii][jj] > p.first+w) {
				d[ii][jj] = p.first+w;
				pq.emplace(d[ii][jj], ar<int,2> {ii, jj});
			}
		}
	}
	cout << (d[ei][ej]>1e9?"NO":to_string(d[ei][ej])) << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
