/*
 	TASK : FC_Stock
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
const int mxN = 1e6+1;
int dp[mxN];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n,a,b;
	cin >> n >> a;
	dp[1] = a;
	for(int i=2; i<=n; i++){
		cin >> b;
		dp[i] = dp[i-1];
		if(b - a > 0) dp[i] += b-a;
		a = b;
	}
	int q;
	for(cin >> q;q--;) {
		int l,r;
		cin >> l >> r;
		cout << dp[r] - dp[l] << "\n";
	}
	return 0;
}
