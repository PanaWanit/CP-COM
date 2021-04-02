#include<bits/stdc++.h>
using namespace std;
const int mxN = 3e4+10;
int dp[mxN];
int main() {
	int n;
	scanf("%d", &n);
	while(n--) {
		int l,h,r;
		scanf("%d %d %d", &l, &h, &r);
		for(int i=l; i<r; i++)
			dp[i] = max(dp[i], h);
	}
	for(int i=1; i<256; i++)
		if(dp[i]!=dp[i-1])
			printf("%d %d ", i, dp[i]);
	return 0;
}

