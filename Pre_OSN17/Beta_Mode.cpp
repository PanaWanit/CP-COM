#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e4+10;
int dp[2][mxN];
char a[mxN], b[mxN];
int main() {
	scanf(" %s %s", a+1, b+1);
	int r = strlen(a+1), c = strlen(b+1), mx=0, stpos;
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			if(a[i]==b[j]) dp[i%2][j]=dp[1-i%2][j-1]+1;
			else dp[i%2][j]=0;
			if(dp[i%2][j]>mx) {
				mx = dp[i%2][j];
				stpos=i;
			}
		}
	}
	string ans;
	while(mx--)
		ans += a[stpos--];
	reverse(ans.begin(), ans.end());
	printf("%s\n", ans.c_str());
	return 0;
}

