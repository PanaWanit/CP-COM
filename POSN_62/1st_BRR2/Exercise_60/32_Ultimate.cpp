/*
 	TASK : Ultimate
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
const int mxN = 1001;
int dp[2][mxN],mx=-1;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1; i<=n ;i++){
		for(int j=1; j<=m; j++){
			char x;
			cin >> x;
			if(x == '.') dp[i%2][j] = min({ dp[i%2][j-1] , dp[(i+1)%2][j] , dp[(i+1)%2][j-1]}) + 1 , mx = max(mx ,dp[i%2][j]);
			else dp[i%2][j] = 0;
		}
	}
	cout << mx << "\n";
	return 0;
}
