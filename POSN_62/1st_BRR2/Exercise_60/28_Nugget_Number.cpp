/*
 	TASK : Nugget Number
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
bool dp[101];
int nugget[] = {6,9,20};
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	dp[0] = 1;
	for(int i=6; i<=100; i++){
		for(int j=0; j<3; j++){
			if(i - nugget[j] >= 0 && dp[i-nugget[j]]) dp[i] = 1;
		}
	}
	int n;
	cin >> n;
	if(n < 6) {
		cout << "no\n";
		return 0;
	}
	for(int i=6; i<=n ;i++){
		if(dp[i]) cout << i << "\n";
	}
	return 0;
}
