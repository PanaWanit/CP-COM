/*
  TASK:
  AUTHOR: pnawn_
  LANG: C++14
  SCHOOL: N/a
  EDITOR: Gvim
*/
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
//DEBUG
void DBG(){
	cerr << "]" << endl;
}
template<class A,class... T> void DBG(A h , T... t){
	cerr << to_string(h);
	if(sizeof ...(t)) cerr << ", ";
	DBG(t...);
}
// -D _DEBUG
#ifdef _DEBUG
#define dbg(...) cerr << "DBG(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
int main(){
	use_ios();

	return 0;
}
