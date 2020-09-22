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
#define ep emplace
#define dec(x) cout << fixed << setprecision(x)
#define _lb	lower_bound
#define _ub upper_bound

#define fp first
#define sp second

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
const int di[] = {0,0,1,-1,1,1,-1,-1} , dj[] = {1,-1,0,0,1,-1,1,-1};
string a[2000];
int main(){
	use_ios();
	int n,m;
	cin >> n >> m;
	queue<pii> qu;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == '1'){
				cnt++;
				qu.ep(i,j);
				while(!qu.empty()){
					int ni = qu.front().fp , nj = qu.front().sp;
					qu.pop();
					for(int k=0;k<8;k++){
						int ii = ni+di[k] , jj = nj+dj[k];
						if(ii >= n || jj >= m || ii < 0 || jj < 0) continue;
						if(a[ii][jj] == '0') continue;
						a[ii][jj] = '0';
						qu.ep(ii,jj);
					}
				}
			}
		}
	}
	cout << cnt << "\n";
 	return 0;  
}
/*
	TASK: 
	AUTHOR: ppnw~!
	LANG: C++
	SCHOOL: N/A
	TXTEDITOR: Vim
*/
 
