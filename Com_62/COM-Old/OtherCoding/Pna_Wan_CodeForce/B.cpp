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
#define dec(x) fixed << setprecision(x)

void DBG(){
    cerr << "]" << endl;
}
template<class A,class... T> void DBG(A h , T... t){
    cerr << to_string(h);
    if(sizeof ...(t)) cerr << ", ";
    DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "DBG(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif
void solve(){
	int x;
	string s;
	cin >> s >> x;
	int n = sz(s);
	vector<int> ans(n,-1);
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			if(i-x >= 0 && ans[i-x]==-1) {ans[i-x] = 1;}
			if(i+x < n && ans[i+x] == -1) {ans[i+x] = 1;continue;}
			if(i-x>=0 && ans[i-x]==1) continue;
			if(i+x<n && ans[i+x]==1) continue;
			cout << -1 << '\n';return;	
		}
		else{
			if(i-x >=0 && ans[i-x]==-1) {ans[i-x] = 0;}
			if(i + x < n && ans[i+x] == -1) {ans[i+x] = 0;continue;}
			if(i-x>=0 && ans[i-x]==0) continue;
			if(i+x < n && ans[i+x]==0) continue;
			cout << -1 << '\n';return;
		}
	}
	for(int i=0;i<n;i++) cout << ans[i];
	cout << '\n';
}
void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
int main(){
    use_ios();
	 int t;
	 for(cin >> t;t--;) solve();
    return 0;
}
