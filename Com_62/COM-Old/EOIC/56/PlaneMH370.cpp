/*
 	TASK : PlaneMH370
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
map<string,int> mp;
void solve(){
	int n,m;
	cin >> m >> n;
	while(n--){
		string a;
		cin >> a;
		mp[a] = 1;
	}
	cout << ((int)mp.size()==m?"yes\n":"no\n");
	mp.clear();
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int q;
	for(cin >> q;q--;) solve();
	return 0;
}
