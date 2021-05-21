#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	cin >> a;
	int n = a.size(), st=0, mx=1;
	for(int i=0; i<n; ++i)
		dp[i][i]=1;
	for(int i=n-2; i>=0; --i)
		if(a[i]==a[i+1])
			dp[i][i+1]=1, mx=2, st=i;
	for(int sz=3; sz<=n; ++sz) {
		for(int i=0; i+sz-1<n; ++i) {
			int j = i+sz-1;
			if(dp[i+1][j-1]&&a[i]==a[j]) {
				dp[i][j]=1;
				if(sz>mx)
					mx=sz, st=i;
			}
		}
	}
	for(int i=st; i<=st+mx-1; ++i)
		cout << a[i];
	cout << "\n";
	return 0;
}

