#include<bits/stdc++.h>
using namespace std;
bool dp[120];
int a[] = {6, 9, 20};
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	if(n<6) {
		cout << "no\n";
		return 0;
	}
	dp[0]=1;
	for(int i=6; i<=100; i++) {
		for(int j=0; j<3; j++) {
			if(i-a[j]>=0&&dp[i-a[j]]) dp[i]=dp[i-a[j]];
		}
	}
	for(int i=1; i<=n; ++i)
		if(dp[i]) cout << i << "\n";
	return 0;
}
