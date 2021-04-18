#include<bits/stdc++.h>
using namespace std;
const int mxN = 460*100;
int dp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,sum=0;
	cin >> n;
	dp[0]=1;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		sum+=x;
		for(int j=45000; j>=0; j--) {
			if(j-x>=0&&dp[j-x]) dp[j]=1;
		}
	}
	int mn=2e9,ansi=0, ansj=0;
	for(int i=0; i<=45000; i++) {
		if(dp[i]) {
			if(abs(sum-2*i)<mn) {
				mn=abs(sum-2*i);
				ansi=i, ansj=sum-i;
			}
		}
	}
	cout << ansi << " " << ansj << "\n";
	return 0;
}
