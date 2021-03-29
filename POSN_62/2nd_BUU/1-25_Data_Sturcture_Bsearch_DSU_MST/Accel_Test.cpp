#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define ar array
const int mxN = 1e5;
int p[mxN];
int fr(int i) {
	if(i == p[i]) return i;
	return p[i] = fr(p[i]);
}
pair<ll, int> lan[3][mxN];
vector<pair<ll,ar<int,2>>> a;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		p[i] = i;
		cin >> lan[0][i].first >> lan[1][i].first >> lan[2][i].first;
		lan[0][i].second = lan[1][i].second = lan[2][i].second = i;
	}
	for(int i=0; i<3; i++)
		sort(lan[i], lan[i]+n);
	for(int i=0; i<3; i++) {
		for(int j=0; j<n; j++) {
			a.emplace_back(abs(lan[i][j].first-lan[i][j+1].first), ar<int,2>{lan[i][j].second, lan[i][j+1].second});
		}
	}
	sort(a.begin(), a.end());
	ll ans=0;
	for(auto& x : a) {
		int u = fr(x.second[0]) , v = fr(x.second[1]);
		if(u != v) {
			p[u] = v;
			ans += x.first;
		}
	}
	cout << ans << "\n";
	return 0;
}
