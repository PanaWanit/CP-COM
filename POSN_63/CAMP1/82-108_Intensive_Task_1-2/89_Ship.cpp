#include<bits/stdc++.h>
using namespace std;
const int mxN = 501;
int x[mxN], y[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> x[i] >> y[i];
	sort(x+1, x+n+1), sort(y+1, y+n+1);
	int ans=0;
	for(int i=1; i<=n; i++)
		ans += abs(x[i]-i) + abs(y[i]-i);
	cout << ans << "\n";
	return 0;
}
