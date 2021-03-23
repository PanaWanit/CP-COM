/*
 	TASK :
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

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n ,ans=0;
	for(cin >> n;n--;) {
		int x;cin >> x;
		ans ^= x;
	}
	cout << ans;
	return 0;
}
