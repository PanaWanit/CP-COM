#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll> mp;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	ll n,s,e,qs=0,last=0,ans=0;
	cin >> n;
	while(n--) {
		cin >> s >> e;
		++mp[s], --mp[e+1];
	}
	for(auto& p: mp) {
		if(qs>1)
			ans += (qs-1)*(p.first-last);
		qs+=p.second;
		last=p.first;
	}
	cout << ans << "\n";
	return 0;
}

