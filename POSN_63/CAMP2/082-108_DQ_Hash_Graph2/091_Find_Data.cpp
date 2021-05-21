#include<bits/stdc++.h>
using namespace std;
const int mod = 99999989, mxN=5010*5010;
int mp[mxN], keep[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int a,b,n,m;
	cin >> a >> b >> n >> m;
	for(int i=0,x; i<a; ++i) {
		cin >> x;
		for(int i=0; i<b; ++i) {
			int num = ((x%mod)+((i*i)%mod))%mod;
			while(mp[key] && )
		}
	}
	int ans=0;
	for(int i=0,y; i<n; ++i) {
		cin >> y;
		for(int i=0; i<m; ++i) {
			int key = ((y%mod)+((((i*i)%mod)*i)%mod))%mod;
			ans += mp[key];
		}
	}
	cout << ans << "\n";
	return 0;
}
