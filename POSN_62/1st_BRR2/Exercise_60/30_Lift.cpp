/*
 	TASK : Lift
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
int dp[450*100+1];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,sum=0,mn = 2e9;
	dp[0] = 1;
	cin >> n;
	for(int i=1; i<=n; i++){
		int w;
		cin >> w;
		sum += w;
		for(int j=450*100; j>=0; j--){
			if(j - w >= 0 && dp[j-w]) dp[j] = 1;
		}
	}
	int x,y;
	for(int i=1; i<=450*100; i++){
		if(dp[i]){
			if(mn >= abs(sum - 2*i)) mn = abs(sum-2*i),x=i,y=sum-i:
		}
	}
	cout << x << " " << y << "\n";
	return 0;
}
