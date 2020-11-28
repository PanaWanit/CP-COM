/*
	Task: Safe Square
	Author: Pana Wanit
	Lang: C++17
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
const int mod = 25621;
map<int,int> r,c;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,q,x,y;
	for(cin >> n >> m >> q;q--;){
		cin >> x >> y;
		r[x]=1,c[y]=1;
	}
	cout << ( ((n-sz(r))%mod) * ((m-sz(c))%mod) )%mod << "\n";
	return 0;
}
