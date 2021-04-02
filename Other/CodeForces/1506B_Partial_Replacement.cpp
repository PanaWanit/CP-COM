#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n,k,l,r,ans=1;
	string a;
	cin >> n >> k >> a;
	l=0, r=n-1;
	while(a[l]!='*') ++l;
	while(a[r]!='*') --r;
	for(int i=l; i<r; i+=k) {
		while(a[i]!='*') --i;
		++ans;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	for(cin >> t; t--;)
		solve();
	return 0;
}

