#include<bits/stdc++.h>
using namespace std;
#define vt vector
const int mxN = 1e5;
unordered_map<int,vt<int>> mp;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,q,x;
	cin >> n >> q;
	for(int i=0; i<n; i++) {
		cin >> x;
		mp[x].push_back(i);
	}
	while(q--) {
		int l,r,ans=0;
		cin >> l >> r;
		--l, --r;
		for(auto& x : mp) {
			vt<int>& v = x.second;
			int cnt = upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l);
			ans += (cnt == x.first);
		}
		cout << ans << "\n";
	}
	return 0;
}
