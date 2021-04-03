#include<bits/stdc++.h>
using namespace std;
const int mxN = 2003;
int dp[mxN][mxN];
char a[mxN], b[mxN];
int main() {
	scanf(" %s %s", a+1, b+1);
	int r=strlen(a+1), c=strlen(b+1);
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			if(a[i]==b[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	printf("%d\n", dp[r][c]);
	string ans;
	int i=r, j=c;
	while(i>0&&j>0) {
		if(a[i]==b[j]) ans+=a[i], --i, --j;
		else if(dp[i-1][j]>=dp[i][j-1]) --i;
		else if(dp[i][j-1]>dp[i-1][j]) --j;
	}
	reverse(ans.begin(), ans.end());
	printf("%s\n", !dp[r][c]?"No Roma word":ans.c_str());
	return 0;
}

