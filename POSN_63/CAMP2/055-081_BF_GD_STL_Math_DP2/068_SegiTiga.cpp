#include<bits/stdc++.h>
using namespace std;
int n, dp[3][300][300], mp[] = {2, 1, 0, 2, 1, 1, 1, 2, 1};
char a[300];
void query() {
	int n;
	cin >> n >> (a+1);
	if(a[1]!='0') {
		cout << "no\n";
		return;
	}
	for(int i=1; i<=n; ++i)
		dp[a[i]-'0'][i][i]=1;
	for(int sz=2; sz<=n; ++sz) {
		for(int i=1; i+sz-1<=n; ++i) {
			int j = i+sz-1;
			for(int k=i; k<j; ++k) {
				for(int st=0; st<9; ++st) {
					int aa = st/3, bb=st%3;
					if(!dp[aa][i][k] || !dp[bb][k+1][j]) continue;
					dp[mp[st]][i][j] = 1;
				}
			}
		}
	}
	cout << (dp[0][1][n]?"yes\n":"no\n");
	memset(dp, 0, sizeof(dp));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q=20;
	while(Q--) {
		query();
	}
	return 0;
}

