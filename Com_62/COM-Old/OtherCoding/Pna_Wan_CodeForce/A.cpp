#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pq priority_queue
#define lpq(x) priority_queue<x,vector<x>,greater<x>>
#define omap unordered_map
#define oset unordered_set
#define all(x) (a).begin(),(a).end()
#define _lb lower_bound
#define _ub upper_bound
#define sz(x) (int)(x).size()

#define pb push_back
#define eb emplace_back
#define pp push
#define ep emplace
#define fp first
#define sp second
#define dec(x) fixed << setprecision(x)
void solve(){
	int n;
	string s,ans;
	cin >> n >> s;
	s+='0';
	for(int i=0;i<2*n-1;i+=2){
		ans+=s[i];
	}
	cout << ans << "\n";
}
int main(){
	 ios::sync_with_stdio(0);cin.tie(0);
    int t;
    for(cin>>t;t--;) solve();
    return 0;
}
