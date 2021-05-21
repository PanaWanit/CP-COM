#include<bits/stdc++.h>
using namespace std;
const int mxN = 505;
bool dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j)
			cin >> dp[i][j];
	}
	for(int k=1; k<=n; ++k) {
		for(int i=1; i<=n; ++i) {
			for(int j=1; j<=n; ++j) {
				dp[i][j]|=dp[i][k]&dp[k][j];
			}
		}
	}
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=n; ++j) {
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

