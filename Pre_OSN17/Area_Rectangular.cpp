#include<bits/stdc++.h>
using namespace std;
const int mxN = 1001;
int dp[mxN][mxN];
int main() {
	int r,c,x;
	scanf("%d %d", &r, &c);
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			scanf("%d", &x);
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + x;
		}
	}
	int t;
	scanf("%d", &t);
	while(t--) {
		int x1,x2,y1,y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		++x1, ++x2, ++y1, ++y2;
		printf("%d\n", dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1]);
	}
	return 0;
}

