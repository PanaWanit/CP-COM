#include<bits/stdc++.h>
using namespace std;

const int mod=1e6+3, mxN=1e5+10;
int c[] = {1,5,10,25,50}, dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	dp[0]=1;
	for(int i=0; i<5; ++i) {
		for(int j=c[i]; j<mxN; ++j) {
			dp[j]+=dp[j-c[i]], dp[j]%=mod;
		}
	}
	int q,x;
	cin >> q;
	while(q--) {
		cin >> x;
		cout << dp[x] << "\n";
	}
	return 0;
}

