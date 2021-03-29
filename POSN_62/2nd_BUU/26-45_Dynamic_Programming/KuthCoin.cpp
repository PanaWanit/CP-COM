#include<bits/stdc++.h>
using namespace std;

const int mod = 1e6+3, mxN = 1e5+1;
int c[] = {1, 5, 10, 25, 50}, dp[mxN]={1};
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	for(int i=0; i<5; i++) {
		for(int j=1; j<=mxN; j++) {
			if(j-c[i]>=0) dp[j] = (dp[j]+dp[j-c[i]])%mod;
		}
	}
	int q,x;
	for(cin >> q; q--;) {
		cin >> x;
		cout << dp[x] << "\n";
	}
	return 0;
}
