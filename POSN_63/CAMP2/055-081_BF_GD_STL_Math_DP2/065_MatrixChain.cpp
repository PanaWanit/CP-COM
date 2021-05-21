#include<bits/stdc++.h>
using namespace std;
const int mxN = 15;
int dp[mxN][mxN], r[mxN], c[mxN], p[mxN][mxN];
void print(int lb, int rb) {
	if(lb==rb) {
		cout << "A" << lb;
		return;
	}
	cout << "(";
	print(lb, p[lb][rb]);
	cout << " x ";
	print(p[lb][rb]+1, rb);
	cout << ")";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> r[i] >> c[i];
	for(int sz=2; sz<=n; ++sz) {
		for(int i=1; i+sz-1<=n; ++i) {
			int j = i+sz-1;
			dp[i][j]=1e9;
			for(int k=i; k<j; ++k) {
				int co = dp[i][k]+dp[k+1][j]+r[i]*c[k]*c[j];
				if(co<dp[i][j])
					dp[i][j]=co, p[i][j]=k;
			}
		}
	}
	cout << dp[1][n] << "\n";
	print(1, n);
	cout << "\n";
	return 0;
}

