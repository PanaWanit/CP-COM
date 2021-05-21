#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) (int)(x).size()
struct SWL {
	int e,num;
	bool operator < (const SWL& o) const {
		return e < o.e;
	}
};

void query() {
	int n,x,y,z,mx=0;
	cin >> n >> x >> y >> z;
	vector<SWL> v;
	for(int i=0,s,e; i<n; ++i) {
		cin >> s >> e;
		v.push_back({s, 1}), v.push_back({e+1, -1});
	}
	v.push_back({0, 0});
	sort(v.begin(), v.end());
	int x_cnt=n, y_cnt=0, z_cnt=0,i,j;
	for(i=1; i<sz(v); i=j) {
		for(j=i; j<sz(v) && v[i].e==v[j].e; ++j) {
			if(v[j].num==1) {
				--x_cnt, ++y_cnt;
			}
			else if(v[j].num==-1) {
				--y_cnt, ++z_cnt;
			}
		}
		mx = max(mx, x*x_cnt + y*y_cnt + z*z_cnt);
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

