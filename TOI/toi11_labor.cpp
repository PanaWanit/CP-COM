#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef string str;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

#define pq(x) priority_queue<x>
#define lpq(x) priority_queue<x,vector<x>,greater<x>>
#define vt(x) vector<x>
#define omap unordered_map

#define all(a) (a).begin(),(a).end()
#define pb push_back
#define eb emplace_back
#define dec(x) cout << fixed << setprecision(x)
#define _lb	lower_bound
#define _ub upper_bound

#define fp first
#define sp second

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
const int mxN = 1e6+1;
int a[mxN];
int main(){
	use_ios();
	ll n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> a[i];
	ll lb = 0 , rb = 1e18 , mb;
	while(lb < rb){
		mb = (lb+rb)/2;
		ll sum = 0;
		for(int i=0;i<n;i++){
			sum += mb/a[i];
		}
		if(sum >= m) rb = mb;
		else lb = mb+1ll;
	}
	cout << lb << "\n";
 	return 0;  
}
/*
	TASK: TOI11_Labor at the Deck
	AUTHOR: ppnw~!
	LANG: C++
	SCHOOL: N/A
	TXTEDITOR: Vim
*/
 
