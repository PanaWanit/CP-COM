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
const int mxN = 3001;
int a[mxN] , ans[2];
int main(){
	use_ios();
	int w,h,n;
	for(cin >> w >> h >> n;n--;){
		 int b,x;
		 cin >> b >> x;
		 for(int i=b; i<b+x && i<w ;i++){
			 a[i]++;
		 }
	}
	for(int i=0;i<w;i++){
		if(a[i]==1) ans[1]+=h;
		else if(a[i] == 0) ans[0]+=h;
	}
	cout << ans[0] << " " << ans[1] ;
 	return 0;  
}
/*
	TASK: TOI3_filter 
	AUTHOR: ppnw~!
	LANG: C++
	SCHOOL: N/A
	TXTEDITOR: Vim
*/
 
