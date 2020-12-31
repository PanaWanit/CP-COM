/*
 	TASK : Fluctuate
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,mn,x,mx=0;
	cin >> n >> mn;
	while(--n) {
		cin >> x;
		mx = max(mx, x-mn);
		mn = min(mn, x);
	}
	cout << mx << "\n";
	return 0;
}
