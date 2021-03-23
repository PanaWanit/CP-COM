/*
  TASK: PN_Median
  AUTHOR: pna_wan
  LANG: C++14
  SCHOOL: RYW
  EDITOR: Gvim
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define pq priority_queue
#define vt vector
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define ep emplace
#define dec(x) fixed << setprecision(x);
#define all(x) (a).begin() , (a).end()
#define _lb lower_bound
#define _up upper_bound
#define cbit(x) __builtin_popcount(x)
/// DBG ///
void DBG(){ cerr << "]" << endl; }
template<class A,class... T> void DBG(A h , T... t){
	cerr << h;
	if(sizeof ...(t)) cerr << ", ";
	DBG(t...);
}
#ifdef LOCAL // -D LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") => [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif
pq<double> mx;
pq<double,vt<double>,greater<double>> mn;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	double x;
	cin >> n;
	cout << dec(1);
	for(int i=1;i<=n;i++){
		cin >> x;
		mx.push(x);
		if(i&1) cout << mx.top() << "\n";
		else{
			mn.push(mx.top());
			mx.pop();
			cout << (mn.top() + mx.top())/2 << "\n";
		}
	}
	return 0;
}
