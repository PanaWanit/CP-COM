#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mxN = 1e5+10;
struct SWL {
	int u, num;
	bool operator < (const SWL& o) const {
		return u<o.u;
	}
};
vector<SWL> v;
int c[4];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> m >> n;
	for(int i=0,s,e; i<n; ++i) {
		cin >> s >> e;
		v.push_back({s, 1}), v.push_back({e+1, -1});
	}
	v.push_back({m+1, 0});
	v.push_back({1, 0});
	sort(v.begin(), v.end());
	int st=0,i,j;
	for(i=0; i<sz(v)&&v[i].u<=m; i=j) {
		for(j=i; j<sz(v)&&v[i].u==v[j].u; ++j)
			st+=v[j].num;
		if(j==sz(v)) break;
		c[st%3] += v[j].u - v[i].u;
	}
	char ch;
	cin >> ch;
	if(ch=='R') {
		cout << 2*c[1]+c[2] << "\n";
	}
	else if(ch=='G') {
		cout << c[0]+2*c[2] << "\n";
	}
	else if(ch=='B') {
		cout << 2*c[0]+c[1] << "\n";
	}
	return 0;
}
