/*
	Task: 
	Author: Pana Wanit
	Lang: C++17
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define pq priority_queue
#define umap unordered_map
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
#define cbit(x) __builtin_popcout(x) 
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

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	
	return 0;
}
