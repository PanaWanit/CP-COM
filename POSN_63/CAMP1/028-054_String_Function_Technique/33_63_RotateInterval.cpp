#include<bits/stdc++.h>
using namespace std;
string a;
void solve() {
	int n,k;
	cin >> a >> n >> k;
	int sz=(a).size();
	k%=n;
	for(int i=0; i<sz; i+=n)
		for(int j=0; j<n; ++j)
			cout << a[(j-k+n)%n+i];
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

