/*
 	TASK : Choose BunZ
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(),(x).end()
const int mxN = 1e4+1;
int dp[2][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,r,mod;
	cin >> n >> r >> mod;
	dp[1][0] = 1%mod;
	for(int i=1; i<=n; i++){
		dp[i%2][0] = 1;
		for(int j=1; j<=r; j++){
			dp[i%2][j] = (dp[(i+1)%2][j-1] + dp[(i+1)%2][j])%mod; // C(i,j) = C(i-1,j) + C(i-1,j-1) Pascal Triangle LOL
		}
	}
	cout << dp[n%2][r] << "\n";
	return 0;
}
