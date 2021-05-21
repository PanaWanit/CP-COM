#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4+10;
char a[mxN], b[mxN], *ta=a+1, *tb=b+1;
int dp[2][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> ta >> tb;
	int mx=-1,st=1, sa=strlen(ta), sb=strlen(tb);
	for(int i=1; i<=sa; ++i) {
		for(int j=1; j<=sb; ++j) {
			if(a[i]==b[j]) {
				dp[i%2][j] = dp[1-i%2][j-1]+1;
			}
			else dp[i%2][j]=0;
			if(dp[i%2][j]>mx) mx=dp[i%2][j], st=i;
		}
	}
	for(int i=st-mx+1; i<=st; ++i)
		cout << a[i];
	cout << "\n";
	return 0;
}

