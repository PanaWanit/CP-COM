#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef double db;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<pi> vpi;
typedef string str;

const int MOD = 1e9+7;
const ll INF_ll = 1e18;
const int INF = 2e9;
const int dir4[] = {0,0,1,-1} , dic4[] = {1,-1,0,0};
const int dir8[] = {0,0,1,-1,1,1,-1,-1} , dic8[] = {1,-1,0,0,1,-1,1,-1};

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define ROF(i,a,b) for (int i = (b); i >= (a); i--)
#define FOE(i,x) for(auto& i:x)
#define F0(i,a) FOR(i,0,a)
#define R0(i,a) ROF(i,0,a) 
#define fp first
#define sp second
#define ar array
#define sstr stringstream
#define tstr(a) to_string(a)
#define sz(a) (int)(a).size()
#define all(a) (a).begin(),(a).end()
#define lb lower_bound
#define ub upper_bound
#define ft front()
#define bk back()
#define pf push_front
#define pop pop()
#define pbk pop_back
#define pft pop_front
#define pb push_back
#define eb emplace_back
#define ep emplace
#define ins insert
#define mpp map
#define pqu priority_queue
#define que queue
#define ls list
#define stk stack
#define rev(a) reverse(all(a))
#define uni(a) unique(all(a))
#define spcs(a) set_precision(a)
#define gl(a) getline(cin,a);
#define T(a) for(cin>>a;a--;)
#define Q(a) while(a--)

void CPP_INP(){ios_base::sync_with_stdio(0);cin.tie(0);}

const int N = 7001;
int dp[2][N] , cnt[N];

int main(){
   CPP_INP();
   int n,m;
   cin >> n >> m;
   str a[2];
   FOR(i,1,n+1){
      cin >> a[i%2];
      FOR(j,1,m+1){
         if(a[i%2][j-1]=='1') dp[i%2][j] = min(dp[(i+1)%2][j],min(dp[(i+1)%2][j-1],dp[i%2][j-1]))+1 , cnt[dp[i%2][j]]++;
         else dp[i%2][j] = 0;
      }
   }
   ROF(i,1,min(n,m)-1) cnt[i] += cnt[i+1];
   FOR(i,1,min(n,m)+1) cout << cnt[i] << "\n";
   return 0;
}
/*
 *  TASK: NamYod 
 *  LANG: CPP
 *  EDT: Vi
 *  
 */

