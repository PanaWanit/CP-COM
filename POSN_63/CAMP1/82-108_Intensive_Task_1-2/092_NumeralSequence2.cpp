#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e4+10;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	dp[1]=1;
	for(int i=1; i<mxN; i++) {
		a+=to_string(i);
		dp[i]+=dp[i-1]+(int)a.size();
		//printf("%d ", dp[i]);
	}
	int t;
	cin >> t;
	while(t--) {
		int x;cin >> x;
		if(x==1) {
			cout << 1 << "\n";
			continue;
		}
		int i = upper_bound(dp+1, dp+mxN, x)-dp-1;
		cout << a[x-dp[i]] << "\n";
	}
	return 0;
}
