#include<bits/stdc++.h>
using namespace std;
void solve() {
	string a;
	set<string> s;
	int n,m;
	cin >> n >> m;
	while(m--) {
		cin >> a;
		s.insert(a);
	}
	if((int)s.size() == n) cout << "yes\n";
	else cout << "no\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

