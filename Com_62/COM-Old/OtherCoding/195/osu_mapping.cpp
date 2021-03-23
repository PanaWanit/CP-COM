#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef double db;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef string str;

const int MOD = 1e9+7;
const ll INF_ll = 1e18;
const int INF_I = 2e9;
const int dir4[] = {0,0,1,-1} , dic4[] = {1,-1,0,0};
const int dir8[] = {0,0,1,-1,1,1,-1,-1} , dic8[] = {1,-1,0,0,1,-1,1,-1};

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define ROF(i,a,b) for (int i = (b); i >= (a); i--)
#define FOE(i,x) for(auto& i:x)
#define f0(i,a) FOR(i,0,a)
#define r0(i,a) ROF(i,0,a) 
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
#define pbk pop_back
#define pop pop()
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
#define test_c(a) for(cin>>a;a--;)
#define Qmi(a) while(a--)
void CPP_INP(){ios_base::sync_with_stdio(0);cin.tie(0);}
void re_fi() {freopen("in.txt","r",stdin);}
void wr_fi() {freopen("out.txt","w",stdout);}

const int N = 1e4+10;
ll dist[8][N];
vector<pll> e[N];
void set_INF() {f0(i,8)f0(j,N)dist[i][j]=INF_ll;}

int main(){
   CPP_INP();
   set_INF();
   int n,m,t,S,E;
   cin >> n >> m >> t >> S >> E;
   que<pll> qor;
   Qmi(m){
      ll u,v,w;
      cin >> u >> v >> w;
      e[u].eb(v,w);
   }
   dist[1][S]=0;
   qor.ep(S,1);
   while(!qor.empty()){
      ll u = qor.ft.fp , time = qor.ft.sp , nxt = (time+1)%t;
      qor.pop;
      FOE(x,e[u]){
        if(dist[nxt][x.fp] > dist[time][u] + x.sp){
           dist[nxt][x.fp] = dist[time][u] + x.sp;
           qor.ep(x.fp,nxt);
        } 
      }
   }
   cout << (dist[0][E]==INF_ll?-1:dist[0][E]) << "\n";
   return 0;
}
/*
 *  TASK: Osu!Mapping
 *  LANG: CPP
 *  EDT: Vi
 */

