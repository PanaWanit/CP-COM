#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<pair<ll,ll>> a;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,b;
	ll cnt=0;
	cin >> n >> b;
	while(n--) {
		int s,e;
		cin >> s >> e;
		if(s>e) a.emplace_back(e, s);
	}
	sort(a.begin(), a.end());
	ll s=a[0].first,e=a[0].second;
	for(int i=1; i<=(int)a.size(); i++) {
		if(a[i].first<=e) e=max(a[0].second, e);
		else cnt += e-s, s=a[i].first, e=a[i].second;
	}
	cnt += e-s;
	cout << b+2*cnt << "\n";
	return 0;
}

