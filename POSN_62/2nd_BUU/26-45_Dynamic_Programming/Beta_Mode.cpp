#include<bits/stdc++.h>
using namespace std;
template<class A> bool umax(A& x, const A& y) {
	return x<y?x=y,1:0;
}
const int mxN = 1e4+1;
int dp[2][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a,b,ans="";
	cin >> a >> b;
	int r = (int)a.size(), c = (int)b.size(),mx=0,st=0;
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			if(a[i-1] == b[j-1])
				dp[i%2][j] = dp[(i+1)%2][j-1]+1;
			else
				dp[i%2][j] = 0; // off mem
			if(umax(mx, dp[i%2][j])) st=i-1;
		}
	}
	while(mx--)
		ans += a[st--];
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
	return 0;
}
