#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	int odd_idx=0, even_idx=0,x;
	for(int i=0; i<n; ++i) {
		cin >> x;
		if(i%2==0&&x) odd_idx++;
		else if(i%2==1&&x) even_idx++;
	}
	if(abs(odd_idx-even_idx)<=1||n%2==1) cout << "YES\n";
	else cout << "NO\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
