#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ar array
#define vt vector
#define FOE(x, a) for(auto& x: a)
const int mxN = 500;
bool dp[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cin >> dp[i][j];
	}
	for(int k=0; k<n; k++) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(!dp[i][j] && dp[i][k] && dp[k][j]) dp[i][j]=1;
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cout << dp[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
