#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll> mp;
string a;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	ll n,k,qs=0,ans=0;
	cin >> n >> k >> a;
	a=" "+a;
	for(int i=1; i<=n; ++i) {
		if(a[i]=='O') ++qs;
		else qs-=k;
		if(mp[qs]) ans = max(ans, i-mp[qs]);
		else mp[qs]=i;
	}
	cout << ans << "\n";
	return 0;
}

